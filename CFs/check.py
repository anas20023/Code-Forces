import os
import subprocess

def get_wifi_passwords():
    wifi_passwords = {}

    if os.name == "nt":  # Windows
        networks = subprocess.check_output("netsh wlan show profiles", shell=True).decode("utf-8")
        profiles = [line.split(":")[1].strip() for line in networks.split("\n") if "All User Profile" in line]

        for profile in profiles:
            try:
                result = subprocess.check_output(f'netsh wlan show profile name="{profile}" key=clear', shell=True).decode("utf-8")
                password_lines = [line.split(":")[1].strip() for line in result.split("\n") if "Key Content" in line]
                wifi_passwords[profile] = password_lines[0] if password_lines else "No password found"
            except subprocess.CalledProcessError:
                wifi_passwords[profile] = "Error retrieving password"

    else:  # Linux / macOS
        try:
            result = subprocess.check_output("ls /etc/NetworkManager/system-connections/", shell=True).decode("utf-8")
            profiles = result.strip().split("\n")

            for profile in profiles:
                try:
                    file_path = f"/etc/NetworkManager/system-connections/{profile}"
                    result = subprocess.check_output(f"sudo cat '{file_path}'", shell=True).decode("utf-8")
                    password_lines = [line.split("=")[1].strip() for line in result.split("\n") if "psk=" in line]
                    wifi_passwords[profile] = password_lines[0] if password_lines else "No password found"
                except subprocess.CalledProcessError:
                    wifi_passwords[profile] = "Permission denied. Try running with sudo."
        except subprocess.CalledProcessError:
            print("Error: NetworkManager not found or insufficient permissions.")

    return wifi_passwords

if __name__ == "__main__":
    passwords = get_wifi_passwords()
    if passwords:
        for wifi, password in passwords.items():
            print(f"SSID: {wifi} | Password: {password}")
    else:
        print("No WiFi profiles found.")
