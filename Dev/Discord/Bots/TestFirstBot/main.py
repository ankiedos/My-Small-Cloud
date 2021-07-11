import os
import asyncio
import keepalive
from discord import Client
from replit import db

def say_hello(msg, author):
  msg.channel.send("Hello, @" ++ author)

client = Client()

@client.event 
async def on_ready():
    print("I'm in\n{0}".format(client.user))

# @client.event
# async def on_message(message):
#     if message.author == client.user:
#         return
#     if message.content.startswith("$ "):
#         if message.content[2:] == "hello":
#           say_hello(message, message.author)
@client.event
async def on_message(msg):
  if msg.author == client.user:
    return
    if msg.content.startswith("$ "):
      if msg.content[2:] == "hello":
        say_hello(msg, msg.author)


keepalive.keep_alive()
token = os.getenv("TOKEN") 
client.run(token)