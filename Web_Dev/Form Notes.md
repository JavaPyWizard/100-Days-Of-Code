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
  <input type="text" id="name" name="username" /><br /><br />

  <label for="email">Email:</label>
  <input type="email" id="email" name="useremail" /><br /><br />

  <label for="gender">Gender:</label>
  <select id="gender" name="gender">
    <option value="male">Male</option>
    <option value="female">Female</option></select
  ><br /><br />

  <label for="bio">Bio:</label><br />
  <textarea id="bio" name="bio" rows="4" cols="30"></textarea><br /><br />

  <button type="submit">Submit</button>
</form>
```

---

## Types of `<input>`

```html
<input type="text" />
<!-- Text field -->
<input type="email" />
<!-- Email validation -->
<input type="password" />
<!-- Hidden password -->
<input type="radio" />
<!-- Radio button -->
<input type="checkbox" />
<!-- Checkbox -->
<input type="number" />
<!-- Numeric input -->
<input type="date" />
<!-- Date picker -->
<input type="file" />
<!-- Upload a file -->
<input type="hidden" />
<!-- Hidden value (not visible to user) -->
<input type="submit" />
<!-- Submit button -->
<input type="reset" />
<!-- Reset form fields -->
```

---

## Example with Radio & Checkbox

```html
<form>
  <label>Gender:</label><br />
  <input type="radio" name="gender" value="male" /> Male <br />
  <input type="radio" name="gender" value="female" /> Female <br /><br />

  <label>Skills:</label><br />
  <input type="checkbox" name="skill" value="HTML" /> HTML <br />
  <input type="checkbox" name="skill" value="CSS" /> CSS <br />
</form>
```

---

## Fieldset & Legend (for grouping)

```html
<form>
  <fieldset>
    <legend>Personal Info</legend>

    <label for="name">Name:</label>
    <input type="text" id="name" />
  </fieldset>
</form>
```

---

## Form `method` – GET vs POST

| Method | Data sent in | Use Case                    | Visible in URL? |
| ------ | ------------ | --------------------------- | --------------- |
| GET    | URL query    | Search, filters             | Yes             |
| POST   | Request body | Login, signup, submit forms | No              |

---

## Best Practices

- Always use `<label for="id">` for accessibility
- Use `name` attribute – it’s sent to the server
- Use `placeholder` to guide users
- Validate with `required`, `min`, `maxlength`, etc.

---
