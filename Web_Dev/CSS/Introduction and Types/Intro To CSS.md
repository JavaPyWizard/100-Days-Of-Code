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

CSS selectors target HTML elements based on their type, class, ID, attributes, position, and relationships.

---

### 1. **Basic Selectors**

| Type          | Syntax       | Selects...                     | Example                               |
| ------------- | ------------ | ------------------------------ | ------------------------------------- |
| **Element**   | `p`          | All `<p>` elements             | `p { color: red; }`                   |
| **Class**     | `.className` | Elements with a specific class | `.note { font-weight: bold; }`        |
| **ID**        | `#idName`    | Element with a specific ID     | `#main-title { text-align: center; }` |
| **Universal** | `*`          | All elements                   | `* { margin: 0; }`                    |
| **Group**     | `h1, p`      | All `<h1>` and `<p>` elements  | `h1, p { color: blue; }`              |

---

### 2. **Combinator Selectors** (based on relationships)

| Selector | Meaning                                      | Example                         |
| -------- | -------------------------------------------- | ------------------------------- |
| `A B`    | All B inside A (descendant)                  | `div p { color: green; }`       |
| `A > B`  | All **direct children** B of A               | `ul > li { list-style: none; }` |
| `A + B`  | B immediately **after** A (adjacent sibling) | `h1 + p { font-size: 20px; }`   |
| `A ~ B`  | All siblings B after A (general siblings)    | `h2 ~ p { color: blue; }`       |

---

### 3. **Attribute Selectors**

| Syntax                        | Meaning                           | Example                                  |
| ----------------------------- | --------------------------------- | ---------------------------------------- |
| `[attr]`                      | Elements with that attribute      | `[required] { border: red; }`            |
| `[attr="value"]`              | Attribute exactly equals value    | `[type="text"] { width: 200px; }`        |
| `[attr^="val"]` (starts with) | Attribute starts with `val`       | `[href^="https"] { color: green; }`      |
| `[attr$="val"]` (ends with)   | Attribute ends with `val`         | `[src$=".jpg"] { border: 1px solid; }`   |
| `[attr*="val"]` (contains)    | Attribute contains `val` anywhere | `[title*="tip"] { background: yellow; }` |

---

### 4. **Pseudo-classes** (based on element state/position)

| Selector        | Meaning                                     | Example                                 |
| --------------- | ------------------------------------------- | --------------------------------------- |
| `:hover`        | When mouse hovers                           | `a:hover { color: red; }`               |
| `:first-child`  | First child of a parent                     | `li:first-child { font-weight: bold; }` |
| `:last-child`   | Last child of a parent                      | `p:last-child { color: orange; }`       |
| `:nth-child(n)` | The nth child (starts at 1)                 | `tr:nth-child(2) { background: gray; }` |
| `:focus`        | When an element is focused (like input box) | `input:focus { outline: 2px solid; }`   |

---

### 5. **Pseudo-elements** (select part of an element)

| Selector         | Meaning                         | Example                                |
| ---------------- | ------------------------------- | -------------------------------------- |
| `::before`       | Adds content before the element | `p::before { content: "👉 "; }`        |
| `::after`        | Adds content after the element  | `p::after { content: " 📝"; }`         |
| `::first-letter` | Styles the first letter         | `p::first-letter { font-size: 200%; }` |
| `::first-line`   | Styles the first line           | `p::first-line { color: purple; }`     |

---

### Bonus: Specificity Hierarchy (Which CSS rule applies?)

1. Inline styles: `style="color: red;"` → **Most specific**
2. ID selectors: `#id`
3. Class selectors: `.class`, `[attribute]`, `:hover`
4. Element selectors: `div`, `p`, `h1` → **Least specific**

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
