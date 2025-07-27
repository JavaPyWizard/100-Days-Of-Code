## ✅ `display` Property

Controls **how an element is displayed** in the layout.

| Value          | Meaning                                                   |
| -------------- | --------------------------------------------------------- |
| `block`        | Takes full width (starts on new line). Eg: `<div>`, `<p>` |
| `inline`       | Takes only as much width as needed. Eg: `<span>`, `<a>`   |
| `inline-block` | Like inline but supports height/width/margin/padding      |
| `none`         | Hides the element (won’t take up any space)               |

**Example:**

```css
div {
  display: inline-block;
}
```

---

## ✅ `position` Property

Controls **how elements are positioned** in the document.

| Value      | Description                                                         |
| ---------- | ------------------------------------------------------------------- |
| `static`   | Default position (normal flow)                                      |
| `relative` | Positioned relative to its normal position                          |
| `absolute` | Positioned relative to the nearest positioned ancestor (not static) |
| `fixed`    | Positioned relative to the viewport (stays fixed during scroll)     |
| `sticky`   | Switches between relative and fixed depending on scroll position    |

**Example:**

```css
.box {
  position: absolute;
  top: 50px;
  left: 100px;
}
```

---

## ✅ `z-index`

Sets the **stacking order** of elements (which appears on top).

* Only works on positioned elements (`relative`, `absolute`, etc.)
* Higher value = appears on top

**Example:**

```css
.front {
  z-index: 10;
}
.back {
  z-index: 1;
}
```

---

## ✅ `visibility`

Controls **whether an element is visible** or not.

| Value     | Description                                    |
| --------- | ---------------------------------------------- |
| `visible` | Default, element is shown                      |
| `hidden`  | Element is hidden **but still takes up space** |

**Example:**

```css
.box {
  visibility: hidden;
}
```

---

## ✅ `overflow`

Handles **extra content** that doesn’t fit in the container.

| Value     | Description                  |
| --------- | ---------------------------- |
| `visible` | Default. Content spills out. |
| `hidden`  | Hides the overflow content   |
| `scroll`  | Adds scrollbars              |
| `auto`    | Scrollbars only if needed    |

**Example:**

```css
.container {
  width: 200px;
  height: 100px;
  overflow: auto;
}
```

---

## ✅ `float` and `clear`

Used to **float elements left or right** (mostly for images or layouts).

| Property | Value             | Meaning                          |
| -------- | ----------------- | -------------------------------- |
| `float`  | `left/right`      | Moves element to left/right side |
| `clear`  | `left/right/both` | Stops float effect               |

**Example:**

```css
img {
  float: right;
}
p {
  clear: both;
}
```

