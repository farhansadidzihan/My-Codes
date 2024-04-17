from bardapi import Bard
import os
from dotenv import load_dotenv

load_dotenv()
token = os.getenv("Bard_API_KEY")

bard = Bard(token = token)

result = bard.get_answer("What is the current stock price of Nvidia, Microsoft & Apple?")
print(result)
