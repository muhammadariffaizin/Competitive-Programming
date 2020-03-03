# Soal Penyisihan NPC 2019
## Daftar Isi
- [Angka Keren](#angka-keren)
- [Berlarian di Penjara](#berlarian-di-penjara)
- [Budak Cinta](#budak-cinta)
- [Envisi Property](#envisi-property)
- [Luas Tanah](#luas-tanah)
- [Masyarakat Berkabut](#masyarakat-berkabut)
- [Tebak-Tebakan Nih!](#tebak-tebakan-nih)

## Angka Keren 
| Time Limit | Memory Limit |
|---|:---|
| 1 seconds	| 128 MB | 

#### Deskripsi 
Kaka baru saja belajar operator bitwise dan kombinasi. Dengan ilmu yang dipelajarinya, Kaka ingin menyelesaikan operasi Angka Keren. Angka keren dapat dihasilkan dengan melakukan operasi terhadap list angka. List angka tersebut berisi N angka. Dari N angka tersebut, untuk setiap kombinasi pasang angka yang dilakukan operasi XOR. Lalu, untuk setiap hasil XOR yang bersebelahan kita lakukan operasi OR. Contoh: 
 
Jika dalam list ada 3 angka, yaitu 12, 14, 18. maka angka keren adalah (12 XOR 14) OR (12 XOR 18) OR (14 XOR 18). Hasil angka keren tersebut adalah 2 OR 30 OR 28 yaitu 30. 
 
#### Format Masukan 
Baris pertama berisi bilangan bulat positif yang merupakan nilai N yaitu banyak angka di list. 
Untuk N baris berisi bilangan bulat positif nilai Ai yang merupakan isi list angka. 
 
#### Format Keluaran 
Keluarkan hasil operasi angka keren. 
 
#### Contoh Masukan 
```c
3 
4 
7 
8 
```

Contoh Keluaran 
```c
15 
```

Batasan 
1 ≤ Ai ≤ 10^9 \
2 ≤  N ≤ 10^6

## Berlarian di Penjara  
| Time Limit | Memory Limit |
|---|:---|
| 1 seconds	| 64 MB |

#### Deskripsi 
Kehidupan kadang kalanya akan terasa berat bagi setiap orang. Namun hal tersebut tidak berlaku bagi Baney karena hari demi hari yang ia jalani selalu dipenuhi oleh kemalangan. Kali ini, ia terlibat dengan masalah yang cukup serius. Nah jadi ceritanya begini, kemarin saat pergi ke sekolah, Baney lupa untuk membawa pensil sehingga ia meminjam pada teman sekelasnya. Tetapi karena kesibukannya, ia lupa untuk mengembalikannya. Malangnya, Saat pulang sekolah terjadi razia dan akhirnya Baney terindikasi melakukan pencurian. Singkatnya, saat ini Baney sedang dipenjara. 
Karena Baney tidak merasa bersalah ia mencoba untuk kabur dari penjara. Ternyata, penjara tersebut merupakan labirin yang terdiri dari n wilayah dari 0 hingga n yang dihubungkan oleh tepat n-1 koridor. Namun pintu yang terhubung ke luar hanyalah pintu yang berada di wilayah ujung (misalnya 0-1-2-3, maka pintu keluar berada pada wilayah 0 dan 3). Sayangnya, ada sistem keamanan dalam penjara tersebut sehingga Baney hanya memiliki a waktu saja untuk kabur dan berlari dari wilayah i menuju j atau sebaliknya, membutuhkan waktu aij. Karena rencana Baney untuk kabur dibuat dengan tergesa-gesa, Baney hanya akan terus berlari tanpa kembali hingga menemukan jalan keluar. Bisakah baney keluar hidup-hidup dari penjara tersebut ? 

#### Format Masukan 
Baris Pertama berisi n yaitu banyak wilayah. Untuk n-1 baris selanjutnya terdiri dari i, j, dan aij yang menyatakan koridor yang terhubung serta waktu yang dibutuhkan dari i ke j dan sebaliknya.  
 
Baris selanjutnya berisi t yang menyatakan uji kasus. Untuk setiap kasus uji diberikan p dan a, yang menyatakan posisi Baney ditahan dan batas waktu yang ditentukan. 

#### Format Keluaran 
Untuk tiap kasus uji, keluarkan “Lolos gan” bila Baney dipastikan bisa lolos, “Mungkin berhasil” jika ada kemungkinan untuk lolos, dan “Omae wa mou shindeiru” bila nyawa Baney tidak dapat terselamatkan. 

#### Contoh Masukan 
```c
4 
0 1 4 
0 2 5 
0 3 6 
3 
1 15 
0 5 
0 3 
```

#### Contoh Keluaran 
```c
Lolos gan 
Mungkin berhasil 
Omae wa mou shindeiru 
```

#### Batasan 
1 ≤ aij ≤ 10^9 \
0 ≤ a ≤ 10^9 \
2 ≤ N ≤ 10^5 \
1 ≤ t ≤ 10^5 

## Budak Cinta 
| Time Limit | Memory Limit |
|---|:---|
| 1 seconds	| 256 MB |

#### Deskripsi 
Eyou dan Ilov adalah sepasang kekasih yang terpisah oleh jarak. Mereka berdua tinggal di kota yang berbeda. Tetapi mereka masih tetap berada di satu negara yaitu Enpisiesia. Di dalam Enpisiesia terdapat N buah kota yang dihubungkan oleh M buah jalan dua arah. Kota-kota tersebut dinomori dari 1 sampai N. Dijamin pasti ada cara untuk pergi dari satu kota ke kota lainnya menggunakan satu atau lebih ruas jalan. 
Enpisiesia terbagi dalam beberapa provinsi yang berbeda. Kota A dan B dikatakan berada di dalam satu provinsi jika dan hanya jika jalur terpendek yang dilalui dari A ke B maupun B ke A tidak melewati “Jalan Spesial”. “Jalan Spesial” adalah jalan yang akan membuat beberapa kota menjadi tidak bisa dikunjungi oleh kota lain jika jalan tersebut ditutup. 
Negara Enpisiesia terkenal dengan teknologinya yang sangat maju. Salah satu teknologi kebanggaan bangsa Enpisinesia adalah “Teleporter”. Teleporter ini terdapat di semua kota di Enpisinesia. Dengan teleporter ini,seseorang dapat berpindahan dari satu kota ke kota lainnya dalam waktu sekejap. Tetapi,seseorang hanya dapat memakai teleporter untuk berpindah ke kota yang berada di dalam provinsi yang sama.            
Selanjutnya,anda diharuskan menjawab Q buah pertanyaan. Untuk setiap pertanyaan ke-i,anda diharuskan mencari total panjang jalan terpendek yang harus dilalui Eyou untuk sampai ke rumah Ilov jika keduanya masing-masing tinggal di kota Xi dan Yi 
 
#### Format Masukan 
Baris pertama terdiri dari 2 buah bilangan N dan M. Banyaknya kota serta jalan pada negara Enpisinesia 
M baris selanjutnya terdiri dari 3 buah bilangan Ai,Bi dan Wi. Yang berarti bahwa terdapat jalan yang menghubungkan kota Ai dan Bi sepanjang Wi. 
Baris selanjutnya terdiri dari 1 buah bilangan Q,yang melambangkan banyaknya query. 
Q baris selanjutnya berisi 2 buah bilangan Xi dan Yi seperti yang telah dijelaskan di deskrpisi soal. 
 
#### Format Keluaran 
Q baris berisi sebuah bilangan yang merupakan jawaban dari masingmasing pertanyaan. 
 
#### Contoh Masukan 
```c
10 11 
1 2 7 
2 4 3 
4 5 2 
4 6 2 
6 7 3 
5 7 4 
1 3 5 
2 3 4  
3 10 6 
8 9 1 
5 8 3 
3 
1 10 
2 4 
4 7 
```

#### Contoh Keluaran 
```c
6 
3 
0 
```

#### Penjelasan 
Untuk query pertama, urutan perjalanan Ilov adalah 
- Dari Kota 1 ke Kota 3 menggunakan transporter 
- Dari Kota 3 ke Kota 10 menggunakan “Jalan Special”. 
- Total jalan yang dilewati Ilov adalah 0 + 6 = 6. 
Untuk query kedua,Ilov dapat langsung menggunakan “Jalan Special” yang menghubungkan kota 2 dan 4 \
Untuk query ketiga,Ilov dapat pergi ke kota 5 menggunakan transporter lalu kembali menggunakan transporter untuk ke kota 7. Dengan begitu ia tidak perlu menggunakan “Jalan Special” sama sekali. 
 
#### Batasan 
2 ≤ N ≤ 10^5 \
N – 1 ≤ M ≤ min(n*(n-1),105) \
1 ≤ Q ≤ 10^5 \
1 ≤ Wi ≤ 10^9 

## Envisi Property 
| Time Limit | Memory Limit |
|---|:---|
| 2 seconds	| 32 MB |

#### Deskripsi 
Sebuah perusahaan kontraktor bangunan bernama “Envisi Property” sedang menggarap proyek gedung baru ditengah kota. Presiden perusahaan tersebut hendak menerapkan sistem penerangan ruangan menggunakan teknologi Automated-Light System. Untuk merealisasikannya, perusahaan tersebut merekrut Brembo untuk membantu menerapkan teknologi tersebut. Gedung tersebut mempunyai N buah lantai, dan tiap-tiap lantai mempunyai M buah ruangan. Teknologi Automated-Light System akan diterapkan pada lampu penerangan utama di masing-masing ruangan. 
Automated-Light System nantinya akan berfungsi untuk mengontrol lampu-lampu pada masing-masing ruangan. Sistem ini bekerja dengan cara menerima perintah dari pengguna. Perintah-perintah tersebut adalah sebagai berikut. 
- “ON” – untuk mengetahui jumlah lampu yang sedang dalam keadaan hidup. 
- “OFF” – untuk mengetahui jumlah lampu yang sedang dalam keadaan mati. 
- “TOGGLE k i” – untuk mengganti keadaan lampu pada lantai ke-k ruangan ke-i. 
- “COUNT k i j” – untuk mengetahui jumlah lampu yang hidup pada lantai kek dari ruangan i hingga j. 
- “FIND x” – untuk menemukan posisi lampu dimana lampu tersebut adalah lampu ke-x yang hidup (x dihitung dari ruangan ke 1 lantai ke 1). 
Saat ini Brembo sedang melakukan pengujian terhadap sistem tersebut. Untuk itu ia membuat simulasi dengan menciptakan program sederhana. 

#### Format Masukan 
Masukan dibagi menjadi dua bagian. Pertama, adalah informasi keadaan awal lampu. Kedua, perintah-perintah untuk menguji sistem tersebut. 
Baris pertama terdapat dua bilangan N dan M. Berikutnya, N baris yang masing-masing baris berisi M angka (1 menyatakan lampu hidup, 0 menyatakan lampu mati) dan dipisahkan spasi. Lantai pertama dimulai dari k = 1, dimana 1 ≤ k ≤ N. Dan ruangan pertama pada lantai k, dimulai dari i = 1, 1 ≤ i ≤ M. 
Setelah itu, terdapat bilangan Q yang menyatakan banyaknya perintah yang akan diuji. Q baris berikutnya terdapat string perintah sesuai pada deskripsi. 
 
#### Format Keluaran 
Untuk setiap perintah, cetak berdasarkan perintah tersebut dengan ketentuan sebagai berikut. 
- Perintah 1, 2, dan 4 mencetak satu baris berisi bilangan yang dimaksud. 
- Perintah 3 selalu mencetak kata “DONE”. 
- Perintah 5 mencetak dua bilangan, yaitu nomor lantai dan ruangan (dipisahkan spasi). Jika x melebihi kondisi sebenarnya, maka cetak -1. 
 
#### Contoh Masukan 
```c
2 5 
1 0 0 1 1 
0 0 0 1 1 
6 
ON 
TOGGLE 2 2  
OFF 
COUNT 1 1 4 
FIND 4 
FIND 10 
```

#### Contoh Keluaran 
```c
5 
DONE 
4 
2 
2 2 
-1 
```

#### Batasan 
1 ≤ N ≤ 10 \
1 ≤ M ≤ 100.000 \
1 ≤ Q ≤ 10.000 \
1 ≤ k ≤ N \
1 ≤ i,j ≤ M \ 
1 ≤ x ≤ N * M 

## Luas Tanah 
| Time Limit | Memory Limit |
|---|:---|
| 1 seconds	| 64 MB |

#### Deskripsi 
Di suatu kerajaan Schematics, terdapat seseorang yang bernama Pisi. Pisi merupakan seorang yang kaya raya, akan tetapi ia memiliki sifat yang pelit. Pada suatu hari, Pisi berkeinginan untuk membeli tanah yang nantinya akan digunakan untuk menanam tanamannya, akan tetapi karena ia memiliki sifat pelit, maka ia ingin luas tanah yang ia beli seminimum mungkin tetapi semua tanaman yang ia miliki tetap dapat ditanam. Pisi mempunyai N tanaman, setiap tanaman memiliki posisi koordinat masing-masing, tentukan berapa luas minimum yang harus dimiliki Pisi agar dapat menanam tanaman yang ia miliki tersebut. 
 
#### Format Masukan 
Baris pertama berisi bilangan bulat N, yang menyatakan banyaknya tanaman yang ia miliki. N baris berikutnya Ai dan Bi (1 ≤ i ≤ N) yang menyatakan koordinat dari tanaman ke i. 
 
#### Format Keluaran 
Keluarkan luas minimum yang harus dimiliki oleh Pisi dengan ketelitian 2 angka di belakang koma. 
 
#### Contoh Masukan 
```c
5 
0 0 
3 3 
0 5 
5 0 
5 5 
```

#### Contoh Keluaran 
```c
25.00 
```

#### Batasan 
3 ≤ N ≤ 10^5 

## Masyarakat Berkabut 
| Time Limit | Memory Limit |
|---|:---|
| 1 seconds	| 64 MB |

#### Deskripsi 
Akhir - akhir ini Indonesia sedang dilanda suatu masalah. Akibat kebakaran hutan, kabut asap mulai menyelimuti negara ini. Para penduduknya mulai memakai masker setiap hari karena kondisi udara yang tidak sehat. 
Karena hal tersebut, seorang programmer berusaha membuat satuan ANTIKABUT. Tetapi, salah satu masalah yang dihadapinya adalah peletakan posko penyelamatannya. Posko-posko penyelamatan tersebut terletak pada bidang 2 dimensi. Agar komunikasi berjalan dengan baik, posko-posko tersebut haruslah terhubung satu sama lain. Biaya untuk menghubungkan suatu posko dengan posko lainnya adalah nilai minimum dari selisih koordinat x dan koordinat y nya. Dengan kata lain, biaya penghubungan suatu posko A(x1, y1) dan B(x2, y2) adalah min(|x1 - x2|, |y1 - y2|). Karena dana pemerintah yang sangat minim, maka programmer tersebut harus membuat peletakan posko dengan biaya seminimum mungkin. Karena kerjaan yang menumpuk, ia pun memminta bantuanmu untuk menyelesaikan masalah ini. 
 
#### Format Masukan 
Baris pertama berisisi sebuah bilangan bulat N yang merupakan banyaknya posko pada bidang. 
N baris selanjutnya berisi 2 buah bilangan bulat xi, yi berisi titik koordinat posko ke-i. 

#### Format Keluaran 
Sebuah baris berisi bilangan bulat yang merupakan biaya minimum untuk menghubungkan semua posko. 
 
#### Contoh Masukan 
```c
3 
1 3 
2 3 
4 5 
```

#### Contoh Keluaran 
```c
2 
```

#### Batasan 
1 ≤ N ≤ 10^5 \
-10^9 ≤ xi, yi ≤ 10^9 

## Tebak-Tebakan Nih! 
| Time Limit | Memory Limit |
|---|:---|
| 1 seconds	| 32 MB |

#### Deskripsi 
Eressa adalah orang yang suka mempersulit dirinya dan orang lain. Ketika ia ingin menyimpan sebuah bilangan x, ia pasti tidak ingin agar orang lain dapat mengetahuinya dengan mudah. Agar tidak mudah ditebak oleh dirinya sendiri dan orang lain, ia melakukan enkripsi pada nilai tersebut. Mula mula, ia mengalikan dua buah bilangan prima p dan q yang berbeda sehingga menghasilkan nilai n yang lebih besar dari x. Kemudian, ia memilih bilangan e yang dijadikan sebagai faktor enkripsi. Karena ia sangat menyukai bilangan prima. Ia memutuskan agar nilai e yang dipilih tidak memiliki faktor prima yang sama dengan phi(n), dimana phi(n) didefinisikan sebagai banyaknya bilangan bulat positif yang tidak lebih dari dan saling koprima terhadap n. Dari tiga buah bilangan x, n dan e, diperoleh bilangan c yang telah dienkripsi dengan : 
'𝑐 = 𝑥^𝑒 𝑚𝑜𝑑 𝑛'
Karena Eressa suka mempersulit orang lain, maka ia menantangmu untuk menebak bilangan yang telah disimpan oleh Eressa. Tebaklah bilangan x bila diberikan bilangan c, e, dan n. 
 
#### Format Masukan 
Baris pertama merupakan banyak kasus uji T. Untuk T baris selanjutnya terdapat bilangan c, e, dan n sesuai deskripsi. 
 
#### Format Keluaran 
Untuk setiap kasus uji keluarkan bilangan x yang telah disimpan oleh Eressa. 
 
#### Contoh Masukan 
```c
1 
12 3 15 
```

#### Contoh Keluaran 
```c
3 
```
 
#### Batasan 
1 ≤ T ≤ 10^3 \
1 ≤ c, e, n ≤ 2^32 
