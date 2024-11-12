-- Tabela Autor
CREATE TABLE Autor (
    id_autor INT PRIMARY KEY NOT NULL AUTO_INCREMENT,
    nome VARCHAR(100) NOT NULL,
    nacionalidade VARCHAR(50)
);

-- Tabela Livro
CREATE TABLE Livro (
    id_livro INT PRIMARY KEY NOT NULL AUTO_INCREMENT,
    titulo VARCHAR(200) NOT NULL,
    id_autor INT,
    ano_publicacao YEAR,
    genero VARCHAR(50),
    FOREIGN KEY (id_autor) REFERENCES Autor(id_autor)
);

-- Tabela Usuario
CREATE TABLE Usuario (
    id_usuario INT PRIMARY KEY NOT NULL AUTO_INCREMENT,
    nome VARCHAR(100) NOT NULL,
    email VARCHAR(100) NOT NULL,
    telefone VARCHAR(15)
);

-- Tabela Emprestimo
CREATE TABLE Emprestimo (
    id_emprestimo INT PRIMARY KEY AUTO_INCREMENT,
    id_usuario INT,
    id_livro INT,
    data_emprestimo DATE NOT NULL,
    data_devolucao DATE,
    FOREIGN KEY (id_usuario) REFERENCES Usuario(id_usuario),
    FOREIGN KEY (id_livro) REFERENCES Livro(id_livro)
);

