# Please install OpenAI SDK first: `pip3 install openai`
import os
from openai import OpenAI

stringToInvert = input()
instruction = "把这个字符串倒序输出，不要加多余的东西，例如12345，你回答54321即可。现在，数据是：" + stringToInvert
client = OpenAI(
    api_key=os.environ.get('DEEPSEEK_API_KEY'),
    base_url="https://api.deepseek.com",
)

response = client.chat.completions.create(
    model="deepseek-flash",
    messages=[
        {"role": "system", "content": "You are a helpful assistant"},
        {"role": "user", "content": instruction},
    ],
    stream=False,
    reasoning_effort="high",
    extra_body={"thinking": {"type": "enabled"}},
)

print(response.choices[0].message.content)