## 15. HTML List Tags

HTML provides three types of lists:

- **Unordered List (`<ul>`)** – Bulleted list
- **Ordered List (`<ol>`)** – Numbered or lettered list
- **Description List (`<dl>`)** – Term and description pairs

---

### 1. Unordered List (`<ul>`)

Used for lists where the order doesn't matter.

#### 🔧 Syntax:

```html
<ul>
  <li>Item 1</li>
  <li>Item 2</li>
</ul>
```

#### Example:

- Frontend
- Backend
- Database

---

### 2. Ordered List (`<ol>`)

Used when the order of items is important (steps, rankings, etc.).

#### 🔧 Syntax:

```html
<ol>
  <li>Step 1</li>
  <li>Step 2</li>
</ol>
```

#### Example:

1. Install Python
2. Write Code
3. Run Script

---

#### Ordered List Types (`type` attribute)

You can change number format:

- `type="1"` – Numbers (default)
- `type="A"` – Uppercase Letters
- `type="a"` – Lowercase Letters
- `type="I"` – Uppercase Roman
- `type="i"` – Lowercase Roman

#### 🔧 Example:

```html
<ol type="A">
  <li>Apple</li>
  <li>Banana</li>
</ol>
```

A. Apple
B. Banana

---

#### Start and Value Attributes

- `start` – begin list from a custom number
- `value` – override number for specific `<li>`

```html
<ol start="5">
  <li>Fifth Step</li>
</ol>

<ol>
  <li value="10">Manual Start</li>
</ol>
```

---

### 3. Description List (`<dl>`)

Used for dictionary-like definitions or FAQs.

#### Syntax:

```html
<dl>
  <dt>HTML</dt>
  <dd>HyperText Markup Language</dd>
</dl>
```

#### Example:

**HTML**
→ HyperText Markup Language
**CSS**
→ Cascading Style Sheets

---

### 4. Nested Lists

Lists inside lists.

#### Syntax:

```html
<ul>
  <li>
    Main
    <ul>
      <li>Sub-item</li>
    </ul>
  </li>
</ul>
```

- Frontend

  - HTML
  - CSS

- Backend

  - Node.js
  - PHP

---

### 5. Unordered List Marker Types (Without CSS)

You can use the `type` attribute in `<ul>` to change the bullet style.

| Type     | Bullet Style    |
| -------- | --------------- |
| default  | ● Filled Circle |
| `circle` | ○ Hollow Circle |
| `square` | ■ Square        |

#### Syntax and Examples:

```html
<ul>
  <li>● Frontend</li>
</ul>

<ul type="circle">
  <li>○ HTML</li>
</ul>

<ul type="square">
  <li>■ Node.js</li>
</ul>
```

---

### Common Attributes

| Tag    | Attribute | Description                           |
| ------ | --------- | ------------------------------------- |
| `<ol>` | `type`    | Format (1, A, a, i, I)                |
| `<ol>` | `start`   | Start numbering from custom value     |
| `<li>` | `value`   | Override number of specific list item |
| `<ul>` | `type`    | Bullet style (disc, circle, square)   |

---

### Best Practices

- Use `<ul>` when order doesn't matter
- Use `<ol>` for steps, processes, or rankings
- Use `<dl>` for glossaries or definitions
- Avoid deeply nested lists for readability
- Always pair `<dt>` with `<dd>` in description lists

---
