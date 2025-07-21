
## 🧾 **HTML Table Tag — Complete Notes**

### 🔹 **1. Purpose of `<table>`**

The `<table>` tag is used to create **tabular data** structures, where data is arranged in **rows and columns**.

---

### 🔹 **2. Basic Structure**

```html
<table>
  <thead>     <!-- Table Header -->
    <tr><th>Heading 1</th><th>Heading 2</th></tr>
  </thead>
  <tbody>     <!-- Table Body -->
    <tr><td>Row 1, Cell 1</td><td>Row 1, Cell 2</td></tr>
  </tbody>
  <tfoot>     <!-- Table Footer -->
    <tr><td>Footer 1</td><td>Footer 2</td></tr>
  </tfoot>
</table>
```

---

### 🔹 **3. Tags Used in a Table**

| Tag          | Description                                            |
| ------------ | ------------------------------------------------------ |
| `<table>`    | Main container for table                               |
| `<tr>`       | Table row                                              |
| `<td>`       | Table data/cell                                        |
| `<th>`       | Table header cell (bold + centered by default)         |
| `<thead>`    | Groups the table header                                |
| `<tbody>`    | Groups the table body rows                             |
| `<tfoot>`    | Groups footer rows (for summaries)                     |
| `<caption>`  | Adds a title/caption to the table                      |
| `<colgroup>` | Defines groups of columns for styling                  |
| `<col>`      | Specifies individual column styles inside `<colgroup>` |

---

### 🔹 **4. Attributes for `<table>`**

| Attribute     | Description                                            |
| ------------- | ------------------------------------------------------ |
| `border`      | Defines table border (use CSS instead for modern HTML) |
| `cellpadding` | Space between cell content and borders (old way)       |
| `cellspacing` | Space between cells (old way)                          |
| `width`       | Width of the table                                     |
| `height`      | Height of the table                                    |
| `align`       | Horizontal alignment of table                          |
| `bgcolor`     | Background color (use CSS instead)                     |

✅ *Most layout/styling should be done using **CSS**.*

---

### 🔹 **5. Attributes for `<th>` and `<td>`**

| Attribute | Use                                                        |
| --------- | ---------------------------------------------------------- |
| `rowspan` | Merge cells **vertically** across rows                     |
| `colspan` | Merge cells **horizontally** across columns                |
| `headers` | Specifies which header cells relate to the cell            |
| `scope`   | Improves accessibility. Use values like `"col"` or `"row"` |
| `abbr`    | Adds tooltip for abbreviations in headers                  |

---

### 🔹 **6. `<colgroup>` and `<col>`**

Used to apply style to entire columns, instead of individually.

```html
<colgroup>
  <col span="1" style="background-color:#eee">
  <col span="2" style="background-color:#cfc">
</colgroup>
```

---

### 🔹 **7. Accessibility Features**

| Feature                              | Purpose                                           |
| ------------------------------------ | ------------------------------------------------- |
| `scope="col"` / `"row"`              | Tells screen readers how cells are related        |
| `<caption>`                          | Screen readers read this to explain table purpose |
| `<th>` instead of `<td>` for headers | Required for accessible headers                   |

---

### 🔹 **8. Styling Tips**

* Use **CSS** instead of HTML attributes for:

  * `border`
  * `padding`
  * `color`, etc.

```css
table {
  border-collapse: collapse;
}
th, td {
  border: 1px solid black;
  padding: 8px;
}
```

---

### 🔹 **9. Common Use Cases**

* **Student result sheets**
* **Employee salary tables**
* **Product listing**
* **Schedule or timetables**
* **Invoice generation**

---

### 🔹 **10. Example:**

```html
<table border="1">
  <caption><strong>Employee Attendance</strong></caption>
  <thead>
    <tr>
      <th>Name</th>
      <th>Department</th>
      <th>Days Present</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>Divyansh</td>
      <td>IT</td>
      <td>26</td>
    </tr>
    <tr>
      <td>Ravi</td>
      <td>HR</td>
      <td>24</td>
    </tr>
  </tbody>
  <tfoot>
    <tr>
      <td colspan="2">Total Employees</td>
      <td>2</td>
    </tr>
  </tfoot>
</table>
```

---

<!-- 

✅ Know how to use:

* `colspan` vs `rowspan`
* `scope`, `caption`, `colgroup`
* Difference between `<thead>`, `<tbody>`, `<tfoot>`

✅ Always ensure:

* **Semantic HTML**: use `<th>` where required.
* **Accessible HTML**: use `scope`, `caption`.
 -->
