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
x是一整數，直接除3，y只會得到一整數，所以先對 x 轉成 double的型態，y就會得到一double型態，或是直接將 3 改成 3.0，3.0 預設是一 double 型態
```
x/3.0
3.0
```
- 轉型：數值轉字串

QString:: 把value轉成字串，兩個冒號是物件的寫法