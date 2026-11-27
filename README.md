<div align="center">

  <img src="https://raw.githubusercontent.com/isocpp/logos/master/cpp_logo.png" alt="C++ Logo" width="90" />

  <h1>🧬 Herencia en C++ (POO)</h1>

  <p>
    <img src="https://img.shields.io/badge/Lenguaje-C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white" alt="C++" />
    <img src="https://img.shields.io/badge/Paradigma-POO-blueviolet?style=for-the-badge" alt="POO" />
    <img src="https://img.shields.io/badge/Repositorio-11__Herencia-informational?style=for-the-badge" alt="11_Herencia" />
  </p>

  <p>
    Prácticas y ejercicios sobre reutilización de código, jerarquías de clases, modos de herencia (<code>public</code>, <code>protected</code>, <code>private</code>), constructores/destructores y sobrescritura en Programación Orientada a Objetos.
  </p>

</div>

---

## 📖 Descripción Conceptual

La **herencia** permite crear nuevas clases (**clases derivadas** o hijas) a partir de clases existentes (**clases base** o padres), heredando sus atributos y métodos y añadiendo o especializando comportamientos sin duplicar código.

### 📊 Diagrama de Jerarquía de Herencia

```mermaid
classDiagram
    class ClaseBase {
        #string etiqueta
        +ClaseBase(string etiqueta)
        +void mostrarInfo() const
        +~ClaseBase()
    }
    class ClaseDerivada {
        -int codigo
        +ClaseDerivada(string etiqueta, int codigo)
        +void mostrarDetalle() const
        +~ClaseDerivada()
    }
    ClaseBase <|-- ClaseDerivada : Hereda (public / protected / private)