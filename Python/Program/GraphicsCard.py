from Komponen import Komponen

class GraphicsCard(Komponen):
    def __init__(self, vram_gb=0, gpu_model="", cuda_cores=0, base_clock=0, boost_clock=0, memory_type="", memory_bandwidth=0, cooling_type="", merk="", nama=""):
        super().__init__(merk, nama)
        self.vram_gb = vram_gb
        self.gpu_model = gpu_model
        self.cuda_cores = cuda_cores
        self.base_clock = base_clock
        self.boost_clock = boost_clock
        self.memory_type = memory_type
        self.memory_bandwidth = memory_bandwidth
        self.cooling_type = cooling_type

    def set_vram_gb(self, vram_gb):
        self.vram_gb = vram_gb

    def get_vram_gb(self):
        return self.vram_gb

    def set_gpu_model(self, gpu_model):
        self.gpu_model = gpu_model

    def get_gpu_model(self):
        return self.gpu_model

    def set_cuda_cores(self, cuda_cores):
        self.cuda_cores = cuda_cores

    def get_cuda_cores(self):
        return self.cuda_cores

    def set_base_clock(self, base_clock):
        self.base_clock = base_clock

    def get_base_clock(self):
        return self.base_clock

    def set_boost_clock(self, boost_clock):
        self.boost_clock = boost_clock

    def get_boost_clock(self):
        return self.boost_clock

    def set_memory_type(self, memory_type):
        self.memory_type = memory_type

    def get_memory_type(self):
        return self.memory_type

    def set_memory_bandwidth(self, memory_bandwidth):
        self.memory_bandwidth = memory_bandwidth

    def get_memory_bandwidth(self):
        return self.memory_bandwidth

    def set_cooling_type(self, cooling_type):
        self.cooling_type = cooling_type

    def get_cooling_type(self):
        return self.cooling_type