## 🌐 FINAL HTML TOPICS

---

### ✅ 1. **Semantic Elements in HTML5**

**Why?**
Semantic elements describe their meaning to both the browser and developer — making code more accessible and SEO-friendly.

| Semantic Tag | Meaning                                            |
| ------------ | -------------------------------------------------- |
| `<header>`   | Top of the page or section                         |
| `<nav>`      | Navigation links                                   |
| `<main>`     | Main content of the document                       |
| `<section>`  | Thematic grouping                                  |
| `<article>`  | Self-contained piece of content (like a blog post) |
| `<aside>`    | Sidebar or related content                         |
| `<footer>`   | Bottom of page or section                          |

**Code Example:**

```html
<body>
  <header>
    <h1>My Blog</h1>
  </header>

  <nav>
    <a href="#">Home</a> | <a href="#">About</a> |
    <a href="#">Contact</a>
  </nav>

  <main>
    <section>
      <article>
        <h2>Article Title</h2>
        <p>This is a blog post content.</p>
      </article>
    </section>

    <aside>
      <p>Related Links or Ads</p>
    </aside>
  </main>

  <footer>
    <p>&copy; 2025 My Blog</p>
  </footer>
</body>
```

---

### ✅ 2. **Meta Tags in `<head>`**

**Why?**
Meta tags help with SEO, browser behavior, and content description.

**Useful Tags:**

```html
<head>
  <meta charset="UTF-8" />
  <meta name="description" content="Learn HTML basics and structure." />
  <meta name="keywords" content="HTML, Web Development, Tags" />
  <meta name="author" content="Divyansh" />
  <meta name="viewport" content="width=device-width, initial-scale=1.0" />
  <title>Meta Tags Example</title>
</head>
```

---

### ✅ 3. **HTML Entities & Symbols**

**Why?**
They let you use special characters that otherwise conflict with HTML.

| Symbol       | Entity    | Output                 |
| ------------ | --------- | ---------------------- |
| Space        | `&nbsp;`  |   (non-breaking space) |
| Less than    | `&lt;`    | `<`                    |
| Greater than | `&gt;`    | `>`                    |
| Copyright    | `&copy;`  | ©                      |
| Trademark    | `&trade;` | ™                      |

**Example:**

```html
<p>This is 10&nbsp;&times;&nbsp;5 = 50</p>
<p>Use &lt;div&gt; not just "div"</p>
```

---

### ✅ 4. **HTML5 Input Types (Advanced)**

You’ve done `text`, `email`, `password`, etc. Here are some unique ones:

```html
<form>
  <label>Select Color:</label>
  <input type="color" name="favColor" /><br /><br />

  <label>Select Range:</label>
  <input type="range" min="0" max="100" /><br /><br />

  <label>Pick Date & Time:</label>
  <input type="datetime-local" /><br /><br />

  <input type="submit" />
</form>
```

---

### ✅ 5. **Accessibility in HTML (Basic)**

**Key Points:**

- Use `alt` for images
- Use `label` properly with `for` and `id`
- Use `tabindex` for keyboard navigation
- ARIA roles are optional (advanced)

```html
<img src="profile.jpg" alt="Divyansh's profile picture" />
<label for="username">Name:</label>
<input type="text" id="username" tabindex="1" />
```

---

### ✅ 6. **Best HTML Practices**

- Use semantic tags instead of too many `<div>`s
- Always provide `alt` for images
- Indent properly for readability
- Don’t nest block elements inside inline ones
- Avoid unnecessary inline styles
- Use lowercase for tag names & attributes

---

### ✅ FINAL CODE: Combines All Concepts

```html
<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="UTF-8" />
    <meta name="description" content="Final HTML Example with All Concepts" />
    <meta name="keywords" content="HTML, Semantic, Forms, Media, Meta" />
    <meta name="author" content="Divyansh Kumar Singh" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <title>Complete HTML Page</title>
  </head>
  <body>
    <header>
      <h1>Welcome to My Final HTML Page</h1>
    </header>

    <nav>
      <a href="#">Home</a> | <a href="#">Blog</a> | <a href="#">Contact</a>
    </nav>

    <main>
      <section>
        <h2>About Me</h2>
        <p>
          Hello! I'm learning HTML and building this page using semantic tags.
        </p>
      </section>

      <article>
        <h2>Feedback Form</h2>
        <form>
          <label for="name">Your Name:</label>
          <input type="text" id="name" required /><br /><br />

          <label for="color">Favorite Color:</label>
          <input type="color" id="color" /><br /><br />

          <label for="range">Skill Level (0-10):</label>
          <input type="range" id="range" min="0" max="10" /><br /><br />

          <label for="dob">Date of Birth:</label>
          <input type="datetime-local" id="dob" /><br /><br />

          <input type="submit" value="Submit" />
        </form>
      </article>

      <aside>
        <h3>Quick Facts</h3>
        <p>HTML &copy; is the foundation of the Web.</p>
        <p>Use &lt;div&gt; and &lt;span&gt; carefully!</p>
      </aside>

      <section>
        <h2>Watch My Favorite Video</h2>
        <iframe
          width="300"
          height="200"
          src="https://www.youtube.com/embed/iChaC_Trtto?start=12"
          title="YouTube video"
          allowfullscreen
        >
        </iframe>
      </section>
    </main>

    <footer>
      <p>&copy; 2025 by Divyansh | All rights reserved.</p>
    </footer>
  </body>
</html>
```

---
