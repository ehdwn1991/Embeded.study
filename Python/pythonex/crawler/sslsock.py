import socket, ssl, time #, select

class Server():
    def __init__(self, listen = '', port = 443, ssl = False):
        self.sock = socket.socket()
        self.sock.bind((listen, port))
        self.sock.listen(5)

    def accept(self):
        self.ssl_sock = None
        while not self.ssl_sock:
            self.ssl_sock = ssl.wrap_socket(self.sock,
                server_side=True,
                certfile=r"C:\moo.pem",
                keyfile=r"C:\moo.key",
                cert_reqs=ssl.CERT_NONE,
                ssl_version=ssl.PROTOCOL_TLSv1)

        newsocket, fromaddr = self.ssl_sock.accept()

        print([newsocket.recv()])

        return newsocket, fromaddr

s = Server()
ns, na = s.accept()
print(ns.recv(1024))
