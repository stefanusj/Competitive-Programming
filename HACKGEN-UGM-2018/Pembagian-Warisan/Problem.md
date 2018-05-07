## Pembagian Warisan

Pak Abdi adalah seorang pemilik ladang luas dengan 4 anak. Saat ini Pak Johan ingin membagi lahannya dengan keempat anaknya, yaitu Johan, Budi, Didi, dan Tono. Untuk mempermudah pembagian, Pak Abdi akan membagi tanahnya menjadi 4 bagian dengan menaruh sebuah pasak di suatu tempat di ladangnya. Tiap anak akan mendapatkan salah satu kuadran dari ladang:

- Johan akan mendapatkan kuadran Barat Laut
- Budi akan mendapatkan kuadran Timur Laut
- Didi akan mendapatkan kuadran Barat Daya
- Tono akan mendapatkan kuadran Tenggara

Setelah puas dengan metode ini, Pak Abdi teringat bahwa ia memiliki aset di beberapa petak ladang. Ia ingin mengetahui ke tangan siapakah aset ini akan berada. Untuk itu, ia meminta anda untuk membuatkan program untuk mengetahui hal tersebut.

### Input Format

Input memiliki beberapa test case. Untuk setiap test case akan dimulai dengan sebuah angka N, yaitu jumlah petak aset yang ingin diketahui oleh Pak Abdi. Pada baris berikutnya akan diberikan angka X dan Y, yaitu koordinat (x,y) petak dimana Pak Abdi akan menaruh pasak. Untuk N baris berikutnya akan diberikan 2 angka A dan B, yaitu koordinat (x,y) petak aset yang ingin diketahui oleh Pak Abdi. Input akan berakhir ketika N adalah 0. Untuk koordinat sumbu X, yaitu sumbu horizontal, -1000000 adalah ujung paling kiri, sementara 1000000 adalah ujung paling kanan. Untuk koordinat sumbu Y, yaitu sumbu vertikal, -1000000 adalah ujung paling bawah, sementara 1000000 adalah ujung paling atas.

### Constraints

    0 <= N <= 100

    -1.000.000 <= X,Y <= 1.000.000

    -1.000.000 <= A,B <= 1.000.000

### Output Format

Untuk tiap input koordinat petak aset, cetak nama pemilik aset pada layar ( Johan / Budi / Didi / Tono ). Jika koordinat petak aset yang diberikan berada pada perbatasan, cetak Perbatasan di layar.

### Sample Input 0

```
5
5 5
10 10
0 0
3 8
8 3
5 2
4
-99999 999
-1000 -1000
748 8292
-2123 0
1872 123
0
```

### Sample Output 0

```
Budi
Didi
Johan
Tono
Perbatasan
Tono
Budi
Tono
Tono
```