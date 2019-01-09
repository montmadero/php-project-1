<h1>Subir noticia</h1>
    <form action="register.php" method="POST" enctype="multipart/form-data">
      Ingresa un titulo:<br>
      <input type="text" name="title" id=""><br>
      inserta el cuerpo del texto: <br>
      <textarea name="body" id="" cols="30" rows="10" maxlength="300"></textarea> <br>
      sube una imagen:
      <input type="file" name="image" id=""><br><br>
      <input type="submit" value="register">
    </form>