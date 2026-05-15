// --- ARITMÉTICA BASE ---
Z => Z => Z add := fn(Z n) -> fn(Z k) -> sub(sub(n)(0))(k);
Z => Z => Z resta := fn(Z n) -> fn(Z k) -> sub(k)(n);
Z => Z => Z mul := fn(Z n) -> fn(Z k) -> if(k, add(n)(mul(n)(sub(1)(k))), 0);
Z => Z => Z pow := fn(Z b) -> fn(Z e) -> if(e, mul(b)(pow(b)(sub(1)(e))), 1);

// DIVISIÓN Y MÓDULO STANDARD PARA TU ENTORNO
Z => Z => Z div := fn(Z n) -> fn(Z k) -> if(lt(n)(k), add(1)(div(resta(n)(k))(k)), 0);
Z => Z => Z mod := fn(Z n) -> fn(Z k) -> if(lt(n)(k), mod(resta(n)(k))(k), n);

// --- EJERCICIO 5: LOS PULPOS ---
Z => Z => Z dec_to_septapus := fn(Z n) -> fn(Z p) -> mod(div(n)(pow(7)(p)))(7);
Z => Z => Z dec_to_octopus := fn(Z n) -> fn(Z p) -> mod(div(n)(pow(8)(p)))(8);
Z => Z => Z dec_to_hexakaidecapus := fn(Z n) -> fn(Z p) -> mod(div(n)(pow(16)(p)))(16);
