<!-- XSL - таблица стилей, с помощью которой можно преобразовать документы XML в документы других типов -->
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
  <xsl:template match="/">
    <html>
      <head>
        <title>Студенты</title>
      </head>
      <body>
        <h1>Информация о студентах</h1>
        <table>
          <tr>
            <th>Имя</th>
            <th>Фамилия</th>
            <th>Возраст</th>
            <th>Университет</th>
            <th>Курс</th>
            <th>Группа</th>
            <th>Факультет</th>
            <th>Специальность</th>
          </tr>
          <xsl:apply-templates select="STUDENTS/STUDENT" />
        </table>
      </body>
    </html>
  </xsl:template>

  <xsl:template match="STUDENT">
    <tr>
      <td><xsl:value-of select="NAME"/></td>
      <td><xsl:value-of select="SURNAME"/></td>
      <td><xsl:value-of select="AGE"/></td>
      <td><xsl:value-of select="UNIVERSITY"/></td>
      <td><xsl:value-of select="COURSE"/></td>
      <td><xsl:value-of select="GROUP"/></td>
      <td><xsl:value-of select="FACULTY"/></td>
      <td><xsl:value-of select="SPECIALITY"/></td>
    </tr>
  </xsl:template>
</xsl:stylesheet>
