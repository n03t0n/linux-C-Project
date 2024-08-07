# lvgl常用函数的使用 
lvgl的控件遵循的是面向对象编程，几乎每一个控件都是从元类继承而来。 
因此，控件的学习就可以看做是不同的类的调用。
## lv_obj_t* lv_label_create(lv_obj_t* parent); 
>该函数即为创建一个label类，继承自一个父类(相应的还有```lv_obj_t* lv_slider_create(lv_obj_t* parent);```等等)  
>最初的父类来自于屏幕，即是通过函数```lv_scr_act();```获取  

## lv_label_set_text(lv_obj_t* obj, char* string);
>该函数是一个常见的设置文本的函数，将传入该函数的类转化为文本类型
>使用示例
```C
lv_obj_t* text = lv_label_create(lv_scr_act());
lv_label_set_text(text, "Hello, world!");
```

![图片](https://github.com/user-attachments/assets/562e1faa-33d5-41ea-9e29-eefc230869e7)

## lv_obj_align(lv_obj_t* obj, lv_align_t align, lv_coord_t x_ofs, lv_coord_t y_ofs); 
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
### 其中中央对齐很很多，常用函数为```lv_obj_center(lv_obj_t* obj);```ta会自动和ta继承的父类对齐 

## lv_label_set_long_mode(lv_obj_t * obj, lv_label_long_mode_t long_mode);
>当文本过长时可以采用这个函数调整文本
>一共有5种模式
![图片](https://github.com/user-attachments/assets/97afe5ff-6901-4955-98a9-3f0a95e6f740)
>需要注意的是要设置标签长度来触发滚动，不然可能会变成滑条的形式，让你能通过拖拽显示所有的内容

## lv_label_set_recolor(lv_obj_t * obj, true);
>开启文本颜色设置
>设置文本颜色的格式如下
```C
lv_label_set_text(label01, "#0000ff Re-color# #ff00ff text# #ff0000 of a# label.");
```
![图片](https://github.com/user-attachments/assets/7110fd2c-a598-409b-b9d0-b8169d837645)

# 弧形滑块的创建
>还能有样式的选择等，这里只做做基础的介绍
```C
    // 创建弧形滑块
    // 需要注意的是角度默认是向右为0度，顺时针增加。 但是lv_arc_set_rotation设置了之后就是相对于设置的角度了
    lv_obj_t * arc = lv_arc_create(lv_scr_act()); // 在当前屏幕创建弧形对象
    lv_arc_set_rotation(arc, 150); // 设置弧形的起始角度
    lv_arc_set_bg_angles(arc, 0, 240); // 设置背景弧形的角度
    
    lv_arc_set_range(arc, 0, 100); // 设置值的范围
    lv_arc_set_value(arc, 20); // 设置初始值
    
    lv_obj_center(arc); // 将弧形对象居中
    lv_obj_set_size(arc, 100, 100); // 设置弧形滑块的宽度和高度

    lv_obj_set_event_cb(arc, arc_event_handler, LV_EVENT_VALUE_CHANGED, NULL); // 注册回调函数，常用的事件类型一般是值的变化和点击
    lv_obj_set_event_cb(arc, arc_event_handler, LV_EVENT_CLICKED, NULL);
```
```C
    // 回调函数
    static void arc_event_handler(lv_event_t * e) {
        lv_event_code_t code = lv_event_get_code(e);
        lv_obj_t * obj = lv_event_get_target(e);
    
        if (code == LV_EVENT_CLICKED) {
            printf("arc Clicked\n");
        } else if (code == LV_EVENT_VALUE_CHANGED) { // 角度改变事件，手触摸/拖动进度条
            angle = lv_arc_get_value(obj); // 获取事件对象改变的角度
            printf("Angle: %d\n", angle); // 打印当前角度
        }
    }
```


