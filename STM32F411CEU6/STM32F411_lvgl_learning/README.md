# lvgl常用函数的使用 
lvgl的控件遵循的是面向对象编程，几乎每一个控件都是从元类继承而来。 
因此，控件的学习就可以看做是不同的类的调用。
## lv_obj_t* lv_label_create(lv_obj_t* parent); 
>该函数即为创建一个类，继承自一个父类  
>最初的父类来自于屏幕，即是通过函数```lv_scr_act();```获取  

## lv_label_set_text(lv_obj_t* obj, char* string);
>该函数是一个常见的设置文本的函数，将传入该函数的类转化为文本类型
>使用示例
```C
lv_obj_t* text = lv_label_create(lv_scr_act());
lv_label_set_text(text, "Hello, world!");
```

![图片](https://github.com/user-attachments/assets/562e1faa-33d5-41ea-9e29-eefc230869e7)

## void lv_obj_align(lv_obj_t* obj, lv_align_t align, lv_coord_t x_ofs, lv_coord_t y_ofs); 
>控件对齐设置，相对于的是父类的对齐
>参数中的x，y的偏移是相对于参数```lv_align_t align```的
>```lv_align_t align```有多种选择
![图片](https://github.com/user-attachments/assets/72d2b290-73d9-4a05-a743-2997cd29e7e5)
>使用示例
```C
/* outer widget align */
lv_obj_t* cont_top = lv_obj_create(lv_scr_act());
lv_obj_t* cont_bottom = lv_obj_create(lv_scr_act());
lv_obj_align(cont_top, LV_ALIGN_TOP_LEFT, 0, 0);
lv_obj_align(cont_bottom, LV_ALIGN_BOTTOM_RIGHT, 0, 0);
/* inner widget align */
lv_obj_t* label_top = lv_label_create(cont_top);
lv_label_set_text(label_top, "At Top Left");
lv_obj_align(label_top, LV_ALIGN_CENTER, 0, 0);
lv_obj_t* label_bottom = lv_label_create(cont_bottom);
lv_label_set_text(label_bottom, "At Bottom Right");
lv_obj_align(label_bottom, LV_ALIGN_CENTER, 0, 0);
```
![图片](https://github.com/user-attachments/assets/1231e2ab-679b-49ac-a5f2-a923f63a89d4)

