import socket

command = input("Enter your command: ")

# Create a TCP/IP socket
sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

# Bind the socket to the address and port
server_address = ('localhost', 10000)
print(f'starting up on {server_address}')
sock.bind(server_address)

# Listen for incoming connections
sock.listen(1)

while True:
    # Wait for a connection
    print('waiting for a connection')
    connection, client_address = sock.accept()
    try:
        print(f'connection from {client_address}')

        # Send the command
        connection.sendall(command.encode())

    finally:
        # Clean up the connection
        connection.close()