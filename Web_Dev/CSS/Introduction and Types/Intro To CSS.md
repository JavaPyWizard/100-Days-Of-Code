## Introduction to CSS\*\*

### What is CSS?

CSS (Cascading Style Sheets) is used to **style HTML elements**—control colors, layouts, spacing, fonts, and more.

---

### Types of CSS

| Type             | Description                                   | Syntax Example                             |
| ---------------- | --------------------------------------------- | ------------------------------------------ |
| **Inline CSS**   | Inside the HTML tag using `style` attribute   | `<p style="color:red;">Hello</p>`          |
| **Internal CSS** | Inside `<style>` tag in the `<head>` section  | `<style> p { color: red; } </style>`       |
| **External CSS** | In a separate `.css` file linked via `<link>` | `<link rel="stylesheet" href="style.css">` |

#### Basic Priority (**_Inline > Internal > External_**)

---

### How to add External CSS to HTML File?

#### **Syntax:**

```html
<link rel="stylesheet" href="style.css" />
```
| Attribute | Meaning                                                    |
| --------- | ---------------------------------------------------------- |
| `rel`     | Specifies the relationship – always `"stylesheet"` for CSS |
| `href`    | Path to your CSS file (e.g., `style.css`)                  |


### CSS Syntax

```css
selector {
  property: value;
}
```

**Example**:

```css
h1 {
  color: blue;
  font-size: 24px;
}
```

---

### Selectors in CSS

| Selector Type | Example  | Selects...                   |
| ------------- | -------- | ---------------------------- |
| **Element**   | `p`      | All `<p>` tags               |
| **Class**     | `.note`  | Elements with `class="note"` |
| **ID**        | `#title` | Element with `id="title"`    |
| **Group**     | `h1, p`  | All `<h1>` and `<p>` tags    |
| **Universal** | `*`      | All elements                 |

---

### Example

```html
<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="UTF-8" />
    <title>CSS Day 1 Example</title>

    <!-- Internal CSS -->
    <style>
      body {
        background-color: #f0f0f0;
      }
      h1 {
        color: navy;
        text-align: center;
      }
      .highlight {
        color: red;
        font-weight: bold;
      }
      #unique {
        font-style: italic;
      }
    </style>
    <!-- <link rel="stylesheet" href="style.css" /> -->
  </head>
  <body>
    <!-- Inline CSS -->
    <h1 style="font-size: 30px;">Welcome to CSS</h1>

    <p>This is a normal paragraph.</p>
    <p class="highlight">This is a highlighted paragraph using class.</p>
    <p id="unique">This is styled with ID selector.</p>
  </body>
</html>
```

---
