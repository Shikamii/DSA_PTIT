## Cách sử dụng
1. Văn bản thuần
    ```
    thêm dấu # vào đầu dòng
    # : heading 1
    ##: headding 2
    ###: heading 3
    ```

Cú pháp:
```
# Tiêu đề loại 1
## Tiêu đề loại 2
### Tiêu đề loại 3
#### Tiêu đề loại 4
##### Tiêu đề loại 5
###### Tiêu đề loại 6
```


2. Đoạn văn - Paragraph
```
    Để viết cách dòng thì sử dụng thêm một dòng trắng ở giữa
```
3. Chữ in nghiêng - Italic
Để in nghiêng văn bản <i>, thêm một dấu * hoặc dấu _ trước và sau từ cần in nghiêng.
```
    Cú pháp:

    *Từ cần in nghiêng 1*

    _Từ cần in nghiêng 2_
```

4. Chữ in đậm - Bold
```
Để in đậm văn bản <b>, thêm hai dấu * hoặc dấu _ trước và sau từ cần in đậm.
```
Cú pháp:
```
**Từ cần in đậm 1**

__Từ cần in đậm 2__
```

5. In đậm và in nghiêng
```
Đơn giản, bạn chỉ cần ba dấu * hoặc dấu _ trước và sau từ đó.

Cú pháp:

***Từ in đậm và in nghiêng 1***

___Từ in đậm và in nghiêng 2___
```

6. Chữ gạch giữa - Strikethrough
```
Để tạo chữ gạch giữa, thêm 2 dấu ~ trước và sau từ đó.

Cú pháp:
~~Khuyến mại~~
```

7. Code trong dòng - Inline Code

Để viết inline <code>, bạn dùng 2 dấu ` ở trước và sau từ đó.
```
Cú pháp:
`inline code`
```
Kết quả:

`inline code`


8. Trích dẫn - Blockquote
```
Để tạo một <blockquote>, thêm dấu > vào trước mỗi dòng trích dẫn.

Cú pháp:

> Trích dẫn dòng 1
> Trích dẫn dòng 2
```
Kết quả:

> Trích dẫn dòng 1 Trích dẫn dòng 2

9. Danh sách có thứ tự - Ordered List
```
Để tạo danh sách <ol><li>, bạn chỉ cần thêm các số, dấu chấm trước nội dung (dùng tab để phân cấp)

Cú pháp:

1. Mục thứ nhất
2. Mục thứ hai
3. Mục thứ ba
```
Kết quả:

    1. Mục thứ nhất
    2. Mục thứ hai
    3. Mục thứ ba`

10. Danh sách không có thứ tự - Unordered List
```
Để tạo danh sách <ul><li>, bạn chỉ cần thêm dấu * hoặc - hoặc + trước nội dung (dùng tab để phân cấp)

Cú pháp:

- Mục thứ nhất
- Mục thứ hai
- Mục thứ ba
```
Kết quả:

- Mục thứ nhất
- Mục thứ hai
- Mục thứ ba


11. Khối lệnh - Block Code

Để viết 1 đoạn <code>, bạn dùng 3 dấu ` ở trước và sau đoạn đó (có thể thêm format ngôn ngữ đó).

Cú pháp:
```py
print("hello world")
```
Kết quả:

> print("hello world")

11. Bảng - Table
```
Để tạo bảng <table><tbody><tr><th><th>, bạn chỉ cần ngăn cách bởi dấu | và cách đầu bảng với thân bảng bằng :--- (số dấu - tuỳ ý)
Cú pháp:

| Cột 1 | Cột 2 | Cột 3 | Cột 4 |
| :--- | :--- | :--- | :--- |
| A | B | C | D |
| E | F | G | H |
| I | K | L | M |
```
Kết quả

    Cột 1	Cột 2	Cột 3	Cột 4

    A	B	C	D

    E	F	G	H

    I	K	L	M


12. Đường kẻ ngang - Horizonal rules
```
Để tạo đường kẻ ngang, sử dụng ba dấu * hoặc - hoặc _ trên một dòng.

Cú pháp:

---
***
___
```
Kết quả:
---
***
___

13. Liên kết - Link
```

Để dẫn liên kết <a href="https://github.com">Github</a>, bạn dùng [text](link).

Cú pháp:

Trực tiếp: chền link trực tiếp luôn

Gián tiếp: [tên](link)

```
14. Hình ảnh - Image
Để chèn trực tiếp, bạn có thể paste thẳng nó như bình thường.

Để dẫn ảnh <img src="https://avatars.githubusercontent.com/u/583231 alt="Github">, 
>bạn dùng ![text](link ảnh).

> Hoặc ![](link ảnh) nếu không cần chữ khi hover.

Cú pháp:

![](https://avatars.githubusercontent.com/u/583231)




Để chèn liên kết vào ảnh <a href="link"><img src="link ảnh" alt="chữ"></a> thì chỉ cần kết hợp đúng cú pháp là được.

`[ ![chữ](link ảnh) ] (link)`


15. Biểu tượng cảm xúc - Icon
Phần này tuỳ vào nền tảng (Github, Discord, ...) có icon đó không, bạn ghi dấu : và tên icon.

Cú pháp:

image

Kết quả:

👁️

More information: https://github.com/lucthienphong1120/Github-Emojis

16. Checkbox
Để chèn checkbox/checked (thường dùng cho to do list trên github) thì ta đánh dấu như list và thêm 1 cặp ngoặc vuông.

Cú pháp:

- [ ] Checkbox
- [x] Checked
Kết quả:

 Checkbox
 Checked
 
17. Escape markdown
Đôi khi bạn sẽ cần những kí hiệu trùng với cú pháp của markdown. Để phân biệt, bạn chỉ cần thêm dấu \ trước những kí hiệu đó là được.

Cú pháp:

\`hai dấu nháy\`

\*\*\*ba dấu sao hai bên\*\*\*
Kết quả:

`hai dấu nháy`

***ba dấu sao hai bên***
