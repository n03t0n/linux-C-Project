# lvgl常用函数的使用 
lvgl的控件遵循的是面向对象编程，几乎每一个控件都是从元类继承而来。 
因此，控件的学习就可以看做是不同的类的调用。
## lv_obj_t* lv_label_create(lv_obj_t* parent); 
>该函数即为创建一个类，继承自一个父类  
>最初的父类来自于屏幕，即是通过函数```lv_scr_act();```获取  

## lv_label_set_text(lv_obj_t* obj, char* string);
>该函数是一个常见的设置文本的函数，将传入该函数的类转化为文本类型
>使用示例
```lv_obj_t* text = lv_label_create(lv_scr_act());
 lv_label_set_text(text, "Hello, world!");```

![图片](https://github.com/user-attachments/assets/562e1faa-33d5-41ea-9e29-eefc230869e7)

