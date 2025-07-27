## 🎨 1. COLOR PROPERTIES

### 🔹 `color`

Sets the **text color** of an element.

```css
p {
  color: red;
  /* or */
  color: #ff0000;
  /* or */
  color: rgb(255, 0, 0);
}
```

> ✅ Accepts color names, hex codes, `rgb()`, `rgba()`, `hsl()` values.

---

### 🔹 `background-color`

Sets the **background color** of an element.

```css
div {
  background-color: lightblue;
}
```

---

### 🔹 `opacity`

Controls transparency (0 = fully transparent, 1 = fully opaque):

```css
.box {
  opacity: 0.5;
}
```

---

## 🅰️ 2. FONT PROPERTIES

| Property         | Description                      | Example                           |
| ---------------- | -------------------------------- | --------------------------------- |
| `font-family`    | Sets the font type               | `font-family: Arial, sans-serif;` |
| `font-size`      | Sets the size of the font        | `font-size: 16px;`                |
| `font-weight`    | Sets thickness (boldness)        | `font-weight: bold;` or `400`     |
| `font-style`     | Italics, oblique, or normal      | `font-style: italic;`             |
| `font-variant`   | Small caps or normal             | `font-variant: small-caps;`       |
| `line-height`    | Sets space between lines         | `line-height: 1.5;`               |
| `letter-spacing` | Space between letters            | `letter-spacing: 2px;`            |
| `word-spacing`   | Space between words              | `word-spacing: 5px;`              |
| `text-transform` | Uppercase, lowercase, capitalize | `text-transform: uppercase;`      |

---

### 🔸 Example of All Font Properties:

```css
p {
  font-family: 'Segoe UI', sans-serif;
  font-size: 18px;
  font-weight: 600;
  font-style: italic;
  line-height: 1.6;
  letter-spacing: 1px;
  word-spacing: 3px;
  text-transform: capitalize;
}
```

---

## ✍️ 3. TEXT PROPERTIES

| Property          | Description                          | Example                          |
| ----------------- | ------------------------------------ | -------------------------------- |
| `text-align`      | Aligns text (left, right, center...) | `text-align: center;`            |
| `text-decoration` | Underline, line-through, etc.        | `text-decoration: underline;`    |
| `text-indent`     | Indent the first line                | `text-indent: 40px;`             |
| `text-shadow`     | Adds shadow to text                  | `text-shadow: 2px 2px 5px gray;` |
| `white-space`     | Controls whitespace handling         | `white-space: nowrap;`           |
| `direction`       | Sets text direction (ltr, rtl)       | `direction: rtl;`                |
| `vertical-align`  | Aligns inline elements vertically    | `vertical-align: middle;`        |

---

### 🔸 Example:

```css
h1 {
  text-align: center;
  text-decoration: underline;
  text-shadow: 2px 2px 5px gray;
}
```

---

## ✒️ TEXT TRANSFORM VALUES

| Value        | Description                       |
| ------------ | --------------------------------- |
| `none`       | Default                           |
| `capitalize` | First letter of each word capital |
| `uppercase`  | All text in uppercase             |
| `lowercase`  | All text in lowercase             |

---

## 💡 Shorthand for Font

Instead of writing many font properties, you can write them in one line:

```css
p {
  font: italic small-caps bold 18px/1.5 Arial, sans-serif;
}
```

**Shorthand Order**:
`font-style font-variant font-weight font-size/line-height font-family`

---

## ✅ Real Example:

```html
<style>
  .fancy-text {
    color: #2c3e50;
    background-color: #ecf0f1;
    font-family: 'Courier New', monospace;
    font-size: 20px;
    font-weight: bold;
    text-align: center;
    text-transform: uppercase;
    text-shadow: 1px 1px 2px gray;
    letter-spacing: 2px;
    word-spacing: 4px;
    line-height: 1.6;
    padding: 10px;
  }
</style>

<p class="fancy-text">Explore the beauty of styled text!</p>
```

---
