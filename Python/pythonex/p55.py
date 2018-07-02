class Connection:
    verbose = 0				# 클래스 변수
    def __init__(self, host):
        self.host = host			# 인스턴스 변수
    def debug(self, v):
        self.verbose = v			# 인스턴스 변수 생성!
    def connect(self):
        if self.verbose:			# 이것은 인스턴스 변수인가? 클래스 변수인가?
            print("connecting to %r"%self.host)
c = Connection("192.168.105.25")
c.debug(True)
c.connect()
