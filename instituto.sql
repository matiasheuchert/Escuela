create table alumno(
    dni varchar(8) unique not null,
    nombre varchar(30) not null,
    apellido varchar(30) not null,
    fdn date,
    direccion varchar(50),
    localidad varchar(30),
    cod_postal varchar(4),
    telefono varchar(10),
    correo varchar(40),
    nivel varchar(15),
    situacion_laboral boolean,
    constraint pk_dni primary key (dni)
);

create table curso(
    id_curso varchar(10) not null unique,
    nombre varchar(30),
    constraint pk_id primary key (id)
);
