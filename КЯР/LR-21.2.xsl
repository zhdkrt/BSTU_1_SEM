<!-- XSL - таблица стилей, с помощью которой можно преобразовать документы XML в документы других типов -->
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
  <xsl:template match="/">
    <html>
      <head>
        <title>Каталог</title>
      </head>
      <body>
        <h1>Информация о книгах</h1>
        <table>
          <tr>
            <th>Название</th>
            <th>Автор</th>
            <th>Жанр</th>
            <th>Цена</th>
         </tr>
          <xsl:apply-templates select="CATALOG/BOOK" />
        </table>
      </body>
    </html>
  </xsl:template>

  <xsl:template match="BOOK">
    <tr>
      <td><xsl:value-of select="NAME"/></td>
      <td><xsl:value-of select="AUTHOR"/></td>
      <td><xsl:value-of select="GENRE"/></td>
      <td><xsl:value-of select="PRICE"/></td>
    </tr>
  </xsl:template>
</xsl:stylesheet>
