## 常用視訊library
1. opencv：處理音訊很爛，jasper是處理音訊，沒有也沒差，如果要視訊強化或其它處理，就只能用這個了。
1. ffmpeg：如果要挖出裡面的資訊。
1. live555：比較小
1. gstreamer：如果沒有挖出裡面的資訊，用這個就不錯了。如果有樹莓派架網路攝影機也用這個。

---
opencv目前最大的缺點是只有32位元

cv：computer vision

高通濾波器：把影像中心模湖化，利於找到邊緣。

命名空間用法要會用
```
namespace std;
namespace cv;
std::String
```
