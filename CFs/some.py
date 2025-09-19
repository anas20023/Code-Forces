from googlesearch import search
import requests
import re
import io
from PyPDF2 import PdfReader

# Regex pattern for Bangladeshi phone numbers
phone_pattern = re.compile(r'(\+8801[3-9]\d{8}|01[3-9]\d{8})')

def extract_phones_from_pdf(url):
    try:
        response = requests.get(url, timeout=10)
        if response.status_code == 200:
            with io.BytesIO(response.content) as f:
                reader = PdfReader(f)
                text = ""
                for page in reader.pages:
                    text += page.extract_text() or ""
                return phone_pattern.findall(text)
    except Exception as e:
        print(f"Error reading {url}: {e}")
    return []

def find_faculty_numbers(name, university):
    query = f'{name} {university} CV filetype:pdf'
    phones_found = []
    
    for result in search(query, num=5, stop=5, pause=2):
        print(f"Checking: {result}")
        if result.endswith(".pdf"):
            phones = extract_phones_from_pdf(result)
            if phones:
                phones_found.extend(phones)
    return set(phones_found)

# Example usage
faculty_name = "Sohel Rahman"
university = "BUET"
numbers = find_faculty_numbers(faculty_name, university)

print(f"📞 Numbers found for {faculty_name} ({university}): {numbers}")
