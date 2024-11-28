- 一般是用 `char str[255]` 表示字串，但是用 `typedef` 去定義型態會更直覺：
```
typdef char byte;
byte buffer[256]
```


- 可以用 `sizeof(int)` 來看幾個 byte

- 宣告一塊記憶體

現在作法 c++：
```
char *frameBuffer;
frameBuffer = new  char[1920*1080]
```
或是，現在作法 c：
```
byte image[1920*1080];
```
或是
```
byte *img;
malloc(sizeof(int))
```

- 轉型：整數轉double
```
y=x/3
double(x)/3;
```
x是一整數，直接除3，y只會得到一整數，所以先對 x 轉成 double的型態，y就會得到一double型態，或是直接將 3 改成 3.0，3.0 預設是一 double 型態。
```
x/3.0
3.0
```
- 轉型：數值轉字串

`QString::` 把value轉成字串，兩個冒號是物件的寫法。

- 陣列

```
int a[10];

或是用

#define BUFFER 10
int a[BUFFER]

```
- 指標

更有彈性
```
int *b; // b是記錄記憶體的位址

b = new [n]; // C語言是用 malloc

或是

b = new [width*height]; //C語言是用 free(b)

要記得釋放記憶體
delete[] b;
```
`frame[y][x] -> frame[y*w+x]`

- 冷知識

電視沒訊號是，畫面是綠色的，因為影像傳輸是用 YCbCr 的格式，沒訊號時是 000，對應 RGB 剛好是綠色的。

- opencv 處理視訊是用 ffmpeg

- 除了泡沬排序法，還有其它的排序法：選擇排序法、快速排序法。

- 左值、右值

- 有空查一下 try & catch

- malloc 用法

```
int *ptr;
ptr = (*int) malloc(3*sizeof(int));
```

- new & delete，是 C++ 的寫法，new 完之後要記得 delete。

- 要注意變數宣告視野

- 指標函數

## 常用視訊library
1. opencv：處理音訊很爛，jasper是處理音訊，沒有也沒差
1. ffmpeg
1. live555：比較小
1. gstreamer