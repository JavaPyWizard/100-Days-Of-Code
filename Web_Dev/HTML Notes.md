# **HTML (Hypertext Markup Language)**

### **_Markup Language_** have tags through which we may define elements, attributes of the hypertext.

## **Structure of HTML**

```html
<!DOCTYPE html>
<html lang="en">
  <head>
    <!-- About the Document -->
    <meta charset="UTF-8" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <meta
      name="description"
      content=" Description (What the page is all about)"
    />
    <title>Title of the Document/Page</title>
  </head>
  <body>
    <!-- Contents of the Web Page -->
    <h1></h1>
  </body>
</html>
```

---

# **Tags in HTML**

## 1. **HTML Heading Tags**

HTML provides 6 levels of headings. These tags are used to define headings in a web page, from the most important (`<h1>`) to the least important (`<h6>`).

| Tag    | Purpose                                              |
| ------ | ---------------------------------------------------- |
| `<h1>` | Main heading (used once per page, usually the title) |
| `<h2>` | Subheading (sections under `<h1>`)                   |
| `<h3>` | Sub-subheading (sections under `<h2>`)               |
| `<h4>` | Smaller subheadings, more detailed sections          |
| `<h5>` | Even smaller sections                                |
| `<h6>` | Least important heading, rarely used                 |

### Example:

```html
<h1>This is H1</h1>
<h2>This is H2</h2>
<h3>This is H3</h3>
<h4>This is H4</h4>
<h5>This is H5</h5>
<h6>This is H6</h6>
```

**Tip:** Always use headings in order for accessibility and SEO best practices.

## 2. **HTML Paragraph Tag**

The `<p>` tag defines a **paragraph** in HTML. It is used to group blocks of text into readable sections, where spaces and line breaks are rendered as a single space

| Tag   | Purpose                                                                         |
| ----- | ------------------------------------------------------------------------------- |
| `<p>` | Defines a block of text as a paragraph. Adds space before and after by default. |

---

### **Example**

```html
<p>This is the first paragraph of my web page. It introduces the topic.</p>

<p>
  Hi! Welcome to HTML Paragraph Tag. Here each line break or spaces are rendered
  as a single space. Thank You.
</p>
```

Output:

```
This is the first paragraph of my web page. It introduces the topic.

Hi! Welcome to HTML Paragraph Tag. Here each line break or spaces are rendered as a single space. Thank You.
```

## 3. **HTML `<pre>` Tag (Preformatted Text)**

The `<pre>` tag is used to **display preformatted text**, meaning:

- Text inside it preserves **spaces**, **tabs**,**indentation** and **line breaks**.
- It is displayed in a **monospaced (fixed-width) font**, just like code.

---

| Tag     | Purpose                                                                                                         |
| ------- | --------------------------------------------------------------------------------------------------------------- |
| `<pre>` | Defines preformatted text. Preserves whitespace, indentation, and line breaks exactly as written in the source. |

---

### **Example**

```html
<pre>
Name:   Divyansh
Course: B.Tech CSE
Year:   2nd

        My name is Divyansh.
</pre>
```

Output:

```
Name:   Divyansh
Course: B.Tech CSE
Year:   2nd

        My name is Divyansh.
```

---

**Tip:**  
Use `<pre>` when you want to:

- Display code or formatted text without extra styling.
- Preserve layout (like ASCII art, poetry, or logs).

  **Note:** Don’t use `<pre>` for large blocks of styled content — it’s best for technical or structural formatting.

## 4. **`<hr>` — Horizontal Rule**

The `<hr>` tag is used to insert a **horizontal line** (a thematic break) across the page.  
It's often used to separate sections of content.

| Tag    | Purpose                                                                                               |
| ------ | ----------------------------------------------------------------------------------------------------- |
| `<hr>` | Creates a horizontal line across the page. Often used to divide content or indicate a thematic break. |

### **Example**

```html
<h3>Hi!</h3>
<hr />
<h3>Hello</h3>
<hr />
```

**Note:**

- It is a **self-closing tag** (no closing `</hr>` needed).
- Can be styled with CSS:

```html
<hr style="border: 1px solid black; width: 50%;" />
```

---

## 5. **`<br>` — Line Break**

The `<br>` tag is used to insert a **single line break**, without starting a new paragraph.

| Tag    | Purpose                                      |
| ------ | -------------------------------------------- |
| `<br>` | Inserts a line break (like pressing "Enter") |

### **Example**

```html
<h3>Hi!</h3>
<br />
<h3>Hello</h3>
<br />
<p>Bye</p>
```

**Note:**

- Also a **self-closing tag**.
- Useful for poetry, addresses, or breaking lines **without extra spacing** like `<p>` would.

---

### Difference:

| Tag    | Action                                    |
| ------ | ----------------------------------------- |
| `<hr>` | Draws a horizontal line                   |
| `<br>` | Breaks the line, continues same paragraph |

---

## 6. **HTML Anchor Tag `<a>`**

The `<a>` tag is used to create **hyperlinks** in HTML. It allows users to navigate to:

- External or internal web pages
- Email addresses
- Downloadable files
- Specific sections of the same page

---

### **Syntax**

```html
<a href="URL">Link Text</a>
```

- `href` → Destination URL
- `Link Text` → Clickable text displayed on the page

---

### **Definition & Purpose**

| Tag   | Purpose                                                      |
| ----- | ------------------------------------------------------------ |
| `<a>` | Defines a hyperlink. Uses `href` to specify the destination. |

---

### **Types of URLs**

| Type             | Description                                    | Example                                      |
| ---------------- | ---------------------------------------------- | -------------------------------------------- |
| **Absolute URL** | Full web address including protocol (https://) | `<a href="https://example.com">Visit</a>`    |
| **Relative URL** | Local path relative to current file            | `<a href="folder/page.html">Visit Local</a>` |

---

### **Examples**

#### 🔗 External Link

```html
<a href="https://www.google.com">Visit Google</a>
```

#### Open in New Tab

```html
<a href="https://openai.com" target="_blank">OpenAI</a>
```

#### Link to Section on Same Page

```html
<a href="#contact">Go to Contact Section</a>

<!-- Later on the page -->
<h2 id="contact">Contact Section</h2>
```

#### Email Link

```html
<a href="mailto:someone@example.com">Send Email</a>
```

#### Download File

```html
<a href="resume.pdf" download>Download Resume</a>
```

#### Tooltip (title)

```html
<a href="https://example.com" title="Click to visit">Hover Me</a>
```

#### Tracking with `ping`

```html
<a href="https://example.com" ping="https://tracker.com/ping">Tracked Link</a>
```

---

### **Common Attributes of `<a>`**

| Attribute  | Description                                                                 |
| ---------- | --------------------------------------------------------------------------- |
| `href`     | URL to navigate to                                                          |
| `target`   | Where to open the link (`_blank`, `_self`, `_parent`, `_top`)               |
| `title`    | Tooltip text shown when hovering                                            |
| `download` | Prompts browser to download the file instead of navigating to it            |
| `id`       | Targetable ID for internal linking                                          |
| `rel`      | Relationship between current and linked page (`nofollow`, `noopener`, etc.) |
| `ping`     | URLs to send tracking POST requests when the link is clicked                |

---

### **`target` Attribute Values**

| Value     | Description                                           |
| --------- | ----------------------------------------------------- |
| `_blank`  | Opens link in a new tab or window                     |
| `_self`   | Default. Opens in the same tab                        |
| `_parent` | Opens in the parent frame                             |
| `_top`    | Opens in the full body of the window (removes frames) |

---

### **Best Practice**

- ✅ Use **descriptive** link text:
  ```html
  <a href="https://news.com">Read Latest News</a>
  ```
- ❌ Avoid vague links:
  ```html
  <a href="#">Click here</a>
  ```

---

## **Text Formatting Tags in HTML**

### 7. **`<b>` — Bold Text**

**Purpose:** Makes text **visually bold** without any added importance.

#### Syntax

```html
<b>This is bold</b>
```

#### Example Output

**This is bold**

---

### 8. **`<strong>` — Strong Importance**

**Purpose:** Makes text **bold** and gives it **semantic importance** (for screen readers or search engines).

#### Syntax

```html
<strong>This is strong</strong>
```

#### Example Output

**This is strong**

---

### 9. **`<i>` — Italic Text**

**Purpose:** Makes text _italic_, usually for visual styling or foreign words.

#### Syntax

```html
<i>This is italic</i>
```

#### Example Output

_This is italic_

---

### 10. **`<em>` — Emphasis**

**Purpose:** Emphasizes the text. Makes it _italic_ and gives it **semantic importance** (like spoken stress).

#### Syntax

```html
<em>This is emphasized</em>
```

#### Example Output

_This is emphasized_

---

### 11. **`<u>` — Underline Text**

**Purpose:** Underlines the text. This is purely **visual** and not semantic.

#### Syntax

```html
<u>This is underlined</u>
```

#### Example Output

<u>This is underlined</u>

---

### 12. **`<mark>` — Highlighted Text**

**Purpose:** Highlights text with a yellow background (by default).  
It’s useful for **search results**, **important highlights**, or to **draw attention**.

#### Syntax

```html
<mark>This is highlighted text</mark>
```

#### Example Output

<mark>This is highlighted text</mark>

---

### 13. **`<del>` — Deleted/Struck-Out Text**

**Purpose:** Represents **deleted or removed** content.  
Typically displayed with a **strikethrough**. Useful in **document revisions**, **comparisons**, or **edits**.

#### Syntax

```html
<del>This text was removed</del>
```

#### Example Output

<del>This text was removed</del>

## **💡 Combining HTML Text Formatting Tags**

You can **nest** multiple tags together to style text **visually** and **semantically**.  
This is useful for conveying **importance**, **emphasis**, and **styling** all at once.

---

### **1. `<strong>` + `<em>`**

Emphasized + Important → _Italic and bold_ (with semantic meaning)

```html
<strong><em>This is important and emphasized</em></strong>
```

**Output:**  
<strong><em>This is important and emphasized</em></strong>

---

### **2. `<b>` + `<i>`**

Visual bold + italic (no semantic meaning)

```html
<b><i>This is bold and italic</i></b>
```

**Output:**  
<b><i>This is bold and italic</i></b>

---

### **3. `<u>` + `<strong>`**

Underlined + strong emphasis (bold)

```html
<u><strong>Important and underlined</strong></u>
```

**Output:**  
<u><strong>Important and underlined</strong></u>

---

### **4. `<mark>` + `<em>` + `<strong>`**

Highlighted + italic + bold — very emphasized and visually highlighted

```html
<mark
  ><strong><em>Key Point</em></strong></mark
>
```

**Output:**  
<mark><strong><em>Key Point</em></strong></mark>

---

### **5. `<del>` + `<em>`**

Struck-through and italic — often used to show removed or outdated emphasis

```html
<del><em>Old Pricing Plan</em></del>
```

**Output:**  
<del><em>Old Pricing Plan</em></del>

---

### **6. `<u>` + `<mark>`**

Underlined and highlighted — eye-catching but not semantically emphasized

```html
<mark><u>Read this carefully</u></mark>
```

**Output:**  
<mark><u>Read this carefully</u></mark>

---

## 14. HTML `<img>` Tag – Complete Explanation

The `<img>` tag is used to embed images into a web page.
It's a **self-closing** tag that requires at least two attributes:

- `src` – the image URL or file path
- `alt` – the alternative text shown when the image cannot be displayed

---

### **Syntax**

```html
<img src="URL" alt="Description" />
```

---

### **Purpose**

| Tag     | Purpose                                    |
| ------- | ------------------------------------------ |
| `<img>` | Displays an image using a file path or URL |

---

### **Absolute vs Relative URL**

**Absolute URL:**

```html
<img
  src="https://m.media-amazon.com/images/I/71O-Os4GilL._UF1000,1000_QL80_.jpg"
  alt="100 Days Challenge"
/>
```

**Relative URL:**

```html
<img src="images/100days.jpg" alt="100 Days Challenge" />
```

---

### **Examples**

#### 1. Basic Image

```html
<img
  src="https://m.media-amazon.com/images/I/71O-Os4GilL._UF1000,1000_QL80_.jpg"
  alt="100 Days Challenge"
/>
```

#### 2. With Width and Height

```html
<img src="..." width="300" height="300" alt="100 Days Challenge" />
```

#### 3. With Tooltip (title)

```html
<img src="..." alt="100 Days Challenge" title="100 Days UI Challenge" />
```

#### 4. Lazy Loading

```html
<img src="..." loading="lazy" alt="100 Days Challenge" />
```

#### 5. Broken Image Example

```html
<img src="invalid.jpg" alt="Image not found" />
```

---

### **Common Attributes**

| Attribute        | Description                                                 |
| ---------------- | ----------------------------------------------------------- |
| `src`            | The image path or URL                                       |
| `alt`            | Fallback text and screen reader accessibility               |
| `width`          | Sets the width of the image                                 |
| `height`         | Sets the height of the image                                |
| `title`          | Tooltip text shown on hover                                 |
| `loading`        | Lazy or eager image loading (`lazy`, `eager`)               |
| `decoding`       | Decoding mode (`async`, `sync`, `auto`)                     |
| `referrerpolicy` | Controls referrer data sent (`no-referrer`, `origin`, etc.) |

---

### **Best Practices**

- Use `alt` for screen readers and fallback
- Use `loading="lazy"` to speed up loading
- Specify `width` and `height` to reduce layout shift
- Use compressed/optimized images
- Avoid using large or raw images directly

---

### **Accessibility Tip**

> Always write meaningful `alt` text so users with screen readers can understand the image's purpose.

---

Here's the **Markdown version** of your complete HTML **List Tags** explanation — including theory, syntax, examples, and list marker types — written cleanly with fenced code blocks.

---

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

# Form Tag `<form>`

## What is a `<form>`?

The `<form>` tag is used to collect **user input** in web pages.
It can send data to a **server** (backend) or handle it using **JavaScript**.

---

## Basic Syntax

```html
<form action="submit.php" method="post">
  <!-- input fields go here -->
</form>
```

| Attribute | Description                                                    |
| --------- | -------------------------------------------------------------- |
| `action`  | The URL where form data is sent (like a server file or script) |
| `method`  | HTTP method: `GET` (visible data) or `POST` (hidden data)      |

---

## Inside a `<form>` – Common Elements

| Tag                       | Purpose                                       |
| ------------------------- | --------------------------------------------- |
| `<input>`                 | Single-line input (text, email, number, etc.) |
| `<label>`                 | Label for input (for accessibility)           |
| `<textarea>`              | Multi-line text box                           |
| `<select>` + `<option>`   | Drop-down list                                |
| `<button>`                | Clickable button                              |
| `<fieldset>` + `<legend>` | Groups related fields                         |

---

## Example: Simple Form

```html
<form action="/submit" method="post">
  <label for="name">Name:</label>
  <input type="text" id="name" name="username"><br><br>

  <label for="email">Email:</label>
  <input type="email" id="email" name="useremail"><br><br>

  <label for="gender">Gender:</label>
  <select id="gender" name="gender">
    <option value="male">Male</option>
    <option value="female">Female</option>
  </select><br><br>

  <label for="bio">Bio:</label><br>
  <textarea id="bio" name="bio" rows="4" cols="30"></textarea><br><br>

  <button type="submit">Submit</button>
</form>
```

---

## Types of `<input>`

```html
<input type="text">        <!-- Text field -->
<input type="email">       <!-- Email validation -->
<input type="password">    <!-- Hidden password -->
<input type="radio">       <!-- Radio button -->
<input type="checkbox">    <!-- Checkbox -->
<input type="number">      <!-- Numeric input -->
<input type="date">        <!-- Date picker -->
<input type="file">        <!-- Upload a file -->
<input type="hidden">      <!-- Hidden value (not visible to user) -->
<input type="submit">      <!-- Submit button -->
<input type="reset">       <!-- Reset form fields -->
```

---

## Example with Radio & Checkbox

```html
<form>
  <label>Gender:</label><br>
  <input type="radio" name="gender" value="male"> Male <br>
  <input type="radio" name="gender" value="female"> Female <br><br>

  <label>Skills:</label><br>
  <input type="checkbox" name="skill" value="HTML"> HTML <br>
  <input type="checkbox" name="skill" value="CSS"> CSS <br>
</form>
```

---

## Fieldset & Legend (for grouping)

```html
<form>
  <fieldset>
    <legend>Personal Info</legend>

    <label for="name">Name:</label>
    <input type="text" id="name">
  </fieldset>
</form>
```

---

## Form `method` – GET vs POST

| Method | Data sent in | Use Case                    | Visible in URL? |
| ------ | ------------ | --------------------------- | --------------- |
| GET    | URL query    | Search, filters             |   Yes           |
| POST   | Request body | Login, signup, submit forms |   No            |

---

## Best Practices

* Always use `<label for="id">` for accessibility
* Use `name` attribute – it’s sent to the server
* Use `placeholder` to guide users
* Validate with `required`, `min`, `maxlength`, etc.

---