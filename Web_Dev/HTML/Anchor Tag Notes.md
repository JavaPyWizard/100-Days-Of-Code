# **HTML Anchor Tag `<a>`**

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