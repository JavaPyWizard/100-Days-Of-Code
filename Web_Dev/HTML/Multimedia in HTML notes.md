Awesome! Let's begin the **Multimedia in HTML** section. This is a crucial part of modern web development where we learn to embed images, audio, videos, and more into your web pages.

---

## 🖼️ 1. `<img>` Tag – Embedding Images

### 🔹 Syntax:

```html
<img src="path-to-image" alt="description" width="300" height="200" />
```

### 🔹 Attributes:

| Attribute          | Description                                            |
| ------------------ | ------------------------------------------------------ |
| `src`              | Source URL or path of the image                        |
| `alt`              | Alternate text shown if image fails to load            |
| `width` & `height` | Set image size (in px or %)                            |
| `loading="lazy"`   | Loads image only when it's visible (performance boost) |

### ✅ Example:

```html
<h2>My Profile Photo</h2>
<img src="profile.jpg" alt="Profile Picture" width="200" height="200" />
```

---

## 🎵 2. `<audio>` Tag – Embedding Audio

### 🔹 Syntax:

```html
<audio controls>
  <source src="music.mp3" type="audio/mpeg" />
  Your browser does not support the audio element.
</audio>
```

### 🔹 Attributes:

| Attribute  | Description                                                    |
| ---------- | -------------------------------------------------------------- |
| `controls` | Shows audio controls (play, pause, volume)                     |
| `autoplay` | Audio plays automatically on page load                         |
| `loop`     | Repeats the audio continuously                                 |
| `muted`    | Starts muted                                                   |
| `preload`  | Informs browser how to load audio (`auto`, `metadata`, `none`) |

---

## 🎥 3. `<video>` Tag – Embedding Video

### 🔹 Syntax:

```html
<video width="400" controls>
  <source src="movie.mp4" type="video/mp4" />
  Your browser does not support the video tag.
</video>
```

### 🔹 Attributes:

Same as `<audio>` + you can also use:

* `poster="thumbnail.jpg"` – shows an image before video plays

---

## 🌐 4. `<iframe>` Tag – Embedding External Content

### 🔹 Used for:

* YouTube videos
* Google Maps
* PDFs
* Other websites

### ✅ Example:

```html
<h2>Embedded YouTube Video</h2>
<iframe width="560" height="315" 
  src="https://www.youtube.com/embed/dQw4w9WgXcQ" 
  frameborder="0" 
  allowfullscreen>
</iframe>
```

### 🔹 Attributes:

| Attribute          | Description                         |
| ------------------ | ----------------------------------- |
| `src`              | URL of the content                  |
| `width` & `height` | Size of the frame                   |
| `frameborder`      | Border visibility                   |
| `allowfullscreen`  | Allows fullscreen option for videos |

---

## ✅ Bonus: Embed PDF

```html
<iframe src="sample.pdf" width="100%" height="600px"></iframe>
```

---

## ✅ Real-World Mini Example:

```html
<!DOCTYPE html>
<html>
<head>
  <title>Multimedia Demo</title>
</head>
<body>
  <h1>My Multimedia Page</h1>

  <h2>📷 My Image</h2>
  <img src="flower.jpg" alt="Beautiful Flower" width="300" />

  <h2>🎵 Listen to Music</h2>
  <audio controls>
    <source src="song.mp3" type="audio/mpeg" />
    Your browser does not support the audio element.
  </audio>

  <h2>🎥 My Video</h2>
  <video width="400" controls>
    <source src="video.mp4" type="video/mp4" />
    Your browser does not support the video tag.
  </video>

  <h2>🌐 My Favorite YouTube Video</h2>
  <iframe width="560" height="315"
    src="https://www.youtube.com/embed/tgbNymZ7vqY"
    frameborder="0"
    allowfullscreen>
  </iframe>
</body>
</html>
```

---

Would you like a **practical exercise** next based on multimedia?
