# Soal Warm Up NLC 2019
## Daftar Isi
- [Closest Greater Element](#closest-greater-element)
- [Dari Kecil ke Besar](#dari-kecil-ke-besar)
- [Jodoh](#jodoh)
- [Kotak Kartu Elsi](#kotak-kartu-elsi)

## Closest Greater Element 
| Time Limit | Memory Limit |
|---|:---|
| 1 seconds	| 64 MB |

#### Deskripsi 
Diberikan dua array integer A dan B. Buatlah array C, seluruh elemen C terdiri dari elemen array A, sedimikian sehingga C[i] elemen terkecil yang lebih besar dari B[i]. Jika tidak ada elemen A yang lebih besar dari B[i] maka C[i] = -1. Dapat dipastikan size array A, B, dan C sama. 
 
#### Format Masukan 
Terdiri dari tiga baris. Baris pertama berisi sebuah bilangan bulat positif N yang menyatakan size array. Baris kedua berisi elemen array. Baris ketiga berisi elemen array B. 
 
#### Format Keluaran 
N buah bilangan bulat yang menyatakan elemen-elemen array C, dipisahkan oleh spasi. 
 
#### Contoh Masukan 
```c
5 
2 6 5 7 0 
1 3 2 5 8 
```

#### Contoh Keluaran 
```c
2 5 5 6 -1 
```
 
#### Batasan 
1 ≤ N ≤ 10^4 \
1 ≤ Ai, Bi ≤ 10^9 

## Dari Kecil ke Besar 
| Time Limit | Memory Limit |
|---|:---|
| 1 seconds	| 256 MB |

#### Deskripsi 
Di awal tahun 2018 ini, Andi yang masih duduk di bangku kelas 9 SMP di sebuah sekolah negeri di pulau Madura mendapat tantangan dari temennya sendiri agar bisa mengubah huruf alphabet dari a sampai z, jika awalnya huruf kecil maka  di ubah ke huruf balok atau huruf kapital, demikian juga sebaliknya jika awalnya huruf kapital maka harus di ubah ke huruf kecil dengan menggunakan cara selain SHIFT + huruf alphabet (untuk kecil ke kapital) dan SHIFT + F3 (untuk kapital ke kecil). Sehingga dia terpikir untuk menggunakan bahasa pemrograman C++, tapi dia belum mengetahui cara melakukan hal tersebut. Sekarang tugasmu adalah membantu Andi untuk menyelesaikan tantangannya tersebut. 
 
#### Format Masukan 
Masukan berisi satu baris yang terdiri dari 2 variabel yaitu K dan B yang dipisah dengan spasi. Variable K sendiri merupakan sebuah huruf kecil (a < K  < z), sementara B merupakan sebuah huruf kapital (A < B  < Z). 
 
#### Format Keluaran 
Keluaran berada dalam satu baris yang berupa huruf kapital dan huruf kecil, dengan format keluaran“/ huruf kecil huruf kapital \”. 

#### Contoh Masukan 
```c
b G 
```
 
#### Contoh Keluaran 
```c
/ g B \ 
```
 
#### Batasan 
a ≤ K  ≤ z \
A ≤ B  ≤ Z 

## Jodoh 
| Time Limit | Memory Limit |
|---|:---|
| 2 seconds	| 64 MB |

#### Deskripsi 
Musmus: “Novani, kamu snmptn dapet dimana ?” \
Novani: “Dapet di institut schematics. Kamu ?” \
Musmus: “Sama dong. Kita jodoh ya… :*” \
Gabby : “SADH$GW&FWH*Y” (bergumam dikejauhan) 
 
Gabby yang mendengar percakapan mereka dari kejauhan menjadi mendapat ide tentang membuat program pencari jodoh. 2 orang dapat dikatakan berjodoh apabila memiliki maksimal 1 perbedaan pada setiap karakteristik. Karakteristik sendiri dapat terdiri dari sifat, prilaku, hobi, phobia, dll. Karena Gabby tidak bisa membuat program, bantulah Gabby membuat program yang ia inginkan. \
Diberikan N laki-laki dan N perempuan serta diberikan M buah karakteristik. Tentukanlah jumlah pasangan yang berjodoh diantara N laki-laki dan perempuan tersebut apabila karakteristik masing-masing orang diketahui. Karakteristik diwakili oleh nomor dari 1 ≤ Karakteristik ≤ M. 
 
#### Format Masukan 
Sebuah baris berisi 2 buah bilangan N dan M. 2*N baris selanjutnya masing-masing berisi bilangan Ai (0 <= Ai <= M) yang menyatakan jumlah karakteristik yang dimiliki. Kemudian baris tersebut diikuti oleh bilangan Bj (1 <= j <= Ai) yang menyatakan nomor karakteristik yang dimiliki oleh orang tersebut (1 <= Bj <= M). Laki-laki dan perempuan dimasukkan secara bergantian dimulai dari laki-laki. 
 
#### Format Keluaran 
Sebuah baris berisi sebuah bilangan yang menyatakan jumlah pasangan berjodoh menurut Gabby. 
 
#### Contoh Masukan 
```c
3 4 
0 
0 
2 1 2 
1 1 
1 1 
1 2
```
 
#### Contoh Keluaran 
```c
7 
```
 
#### Batasan 
1 ≤ M ≤ 100 \
1 ≤ N ≤ 10^4 

## Kotak Kartu Elsi  
| Time Limit | Memory Limit |
|---|:---|
| 1 seconds	| 64 MB |

#### Deskripsi 
Elsi memiliki banyak kartu yang tiap kartunya bertuliskan sebuah bilangan positif yang tidak lebih dari 100. Agar kartunya tertata rapi, Elsi ingin memasukkan kartu tersebut ke dalam kotak-kotak. Karena Elsi suka segala hal yang rapi, dia ingin menaruh kartu-kartunya ke dalam kotak secara terurut dari kecil sampai besar. Namun, 1 kotak hanya bisa menampung kartu-kartu yang bilangannya berbeda. Bantulah Elsi menentukan kotak minimal yang dibutuhkan untuk menyimpan kartu-kartu tersebut. 
 
#### Format Masukan 
Baris pertama berisi T, yaitu banyaknya kasus uji. Tiap kasus uji terdapat 2 baris, pada baris pertamanya berisi N, dimana N adalah banyak kartu yang dimiliki Elsi, pada baris ke 2 berisi Y sebanyak N, dimana Y merupakan bilangan pada tiaptiap kartu Elsi. 
 
#### Format Keluaran 
Tiap kasus uji, terdapat minimal kotak yang dibutuhkan untuk menampung kartu-kartu tersebut, beserta kasus uji ke-X, dimana X adalah urutan kasus uji. ( Kasus#X: output ). 

#### Contoh Masukan 
```c
1 
10 
1 2 1 5 6 4 8 3 3 4 
```

#### Contoh Keluaran 
```c
Kasus #1: 2 
```

#### Batasan 
1 ≤ T ≤ 100 \
1 ≤ N, Y ≤ 10000 
