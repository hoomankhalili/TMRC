import socket

def execute_command(command):
    if command == "00":
        print("Forward")
    elif command == "01":
        print("Turn Left")
    elif command == "10":
        print("Turn Left")
    else:
        print("Backward")

# Create a TCP/IP socket
sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

# Connect the socket to the address and port of the server
server_address = ('localhost', 10000)
print(f'connecting to {server_address}')
sock.connect(server_address)

try:
    # Receive the string
    received_message = sock.recv(1024).decode()
    execute_command(received_message)
finally:
    print('closing socket')
    sock.close()