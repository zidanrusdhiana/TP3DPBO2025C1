# TP3DPBO2025C1

## Janji
Saya Mochamad Zidan Rusdhiana dengan NIM 2305464 mengerjakan Tugas Praktikum 3 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

## Diagram
![tp3 drawio](https://github.com/user-attachments/assets/c04847dc-4833-4ea0-a5c7-d8fbd8433794)

## Penjelasan Alur
### Kelas Dasar
1. **Komponen**
   - Kelas dasar yang menyediakan atribut umum untuk semua komponen komputer
   - Memiliki atribut merk dan nama
2. **ElectronicDevice**
   - Kelas dasar untuk perangkat elektronik
   - Memiliki atribut powerSource dan powerConsumptionWatt

### Komponen Komputer (Inheritance dari Komponen)
3. **Cpu**
   - Mewarisi kelas Komponen
   - Berisi atribut-atribut spesifik terkait komponen CPU
4. **GraphicsCard**
   - Mewarisi kelas Komponen
   - Berisi atribut-atribut spesifik terkait komponen kartu grafis
5. **Harddrive**
   - Mewarisi kelas Komponen
   - Berisi atribut-atribut spesifik terkait komponen penyimpanan
6. **Motherboard**
   - Mewarisi kelas Komponen
   - Berisi atribut-atribut spesifik terkait komponen motherboard
7. **Ram**
   - Mewarisi kelas Komponen
   - Berisi atribut-atribut spesifik terkait komponen RAM
8. **PowerSupply**
   - Mewarisi kelas Komponen
   - Berisi atribut-atribut spesifik terkait komponen catu daya

### Perangkat Periferal (Inheritance dari ElectronicDevice)
9. **Peripheral**
   - Mewarisi kelas ElectronicDevice
   - Mendefinisikan perangkat keras tambahan yang terhubung ke komputer untuk meningkatkan fungsionalitas
   - Berisi atribut-atribut dasar mengenai informasi perangkat periferal
10. **Keyboard**
    - Mewarisi kelas Peripheral, cucu dari ElectronicDevice
    - Berisi atribut-atribut spesifik terkait spesifikasi keyboard
11. **Mouse**
    - Mewarisi kelas Peripheral, cucu dari ElectronicDevice
    - Berisi atribut-atribut spesifik terkait spesifikasi mouse
12. **Monitor**
    - Mewarisi kelas Peripheral, cucu dari ElectronicDevice
    - Berisi atribut-atribut spesifik terkait spesifikasi monitor

### Sistem Komputer (Inheritance dan Composition)
13. **Komputer**
    - Mewarisi kelas ElectronicDevice
    - Memiliki atribut mengenai spesifikasi komputer
    - Mengimplementasikan composite terhadap semua turunan Komponen:
      - Cpu, GraphicsCard, Harddrive, Motherboard, Ram, PowerSupply
    - Juga memiliki composite terhadap Peripheral
    - Atribut Ram, Harddrive, GraphicsCard dan Peripheral diimplementasikan sebagai list/vector karena komputer dapat memiliki beberapa komponen tersebut
    - List/vector Peripheral dibuat sebagai pointer karena yang akan digunakan adalah turunan dari kelas tersebut (Monitor, Mouse, Keyboard)

14. **Laptop**
    - Mewarisi kelas Komputer
    - Secara tidak langsung juga mewarisi ElectronicDevice (cucu dari ElectronicDevice)
    - Mewarisi seluruh komposisi yang ada pada kelas Komputer
    - Dilengkapi dengan atribut-atribut tambahan yang spesifik untuk laptop

## Dokumentasi
![image](https://github.com/user-attachments/assets/8cd72434-2ce0-4e42-b5f6-e5e5eed25076)
![image](https://github.com/user-attachments/assets/4fe57716-9285-416b-b4e8-11d4475573e1)
![image](https://github.com/user-attachments/assets/56aabc04-6d8a-49dc-9527-e007f5f81962)
![image](https://github.com/user-attachments/assets/fc489ff2-44c4-45f9-9936-e0f9928154bc)
![image](https://github.com/user-attachments/assets/a04d5d77-8f9f-46a9-8565-d7b884a7d58d)
