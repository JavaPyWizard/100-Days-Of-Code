# **CSS Box Model**

Every HTML element is essentially a **rectangular box** made up of 4 parts:

```
+-----------------------------+
|         Margin             |  ⟵ Outside space (transparent)
|  +---------------------+   |
|  |      Border         |   |  ⟵ Visible border (can be styled)
|  |  +-------------+    |   |
|  |  |  Padding    |    |   |  ⟵ Space between content and border
|  |  |+---------+ |    |   |
|  |  || Content | |    |   |  ⟵ Actual text/image/element
|  |  |+---------+ |    |   |
|  |  +-------------+   |   |
|  +---------------------+   |
+-----------------------------+
```

---

### Parts of the Box Model

| Part      | Description                                              |
| --------- | -------------------------------------------------------- |
| `Content` | The actual content (text, images, etc.)                  |
| `Padding` | Space between content and border (adds inner spacing)    |
| `Border`  | The visible border around the element                    |
| `Margin`  | Space outside the border (separates from other elements) |

---

### Example Code (HTML + CSS)

```html
<!DOCTYPE html>
<html>
<head>
  <title>Box Model Example</title>
  <style>
    .box {
      width: 200px;
      height: 100px;
      background-color: lightblue;
      padding: 20px;
      border: 5px solid navy;
      margin: 30px;
    }
  </style>
</head>
<body>

  <h2>CSS Box Model Demo</h2>

  <div class="box">
    This is the content inside the box.
  </div>

</body>
</html>
```

---

### Visualization of Above Example:

* `Content`: The text "This is the content inside the box."
* `Padding`: 20px around the text, inside the box
* `Border`: 5px thick navy border around the padded content
* `Margin`: 30px of space outside the border (pushing it away from other elements)

---

### Total Width and Height Formula

```txt
Total Width = content + padding-left + padding-right + border-left + border-right + margin-left + margin-right

Total Height = content + padding-top + padding-bottom + border-top + border-bottom + margin-top + margin-bottom
```

---
