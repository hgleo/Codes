/*
const maca = {
    value: 2,
}

const laranja = {
    value: 3,
}


function mapComThis(arr,thisArg){
    return arr.map(function(item){    
     return item * this.value;}, thisArg);
}

const nums = [1,2];

console.log(' this -> maçã' ,mapComThis(nums,maca));    
console.log(' this -> laranja' ,mapComThis(nums,laranja));
*/
/*
function mapSemThis(arr){
    return arr.map(function(item){
        return item * 2;
    });
}

const nums = [2,4,6,8,10];

console.log('Nums na functiom-> ', mapSemThis(nums));
console.log('Nums-> ', mapSemThis(nums));
*/
/*
function filtraPares(arr){
    return arr.filter(callback);
}

function callback(item){
    return item % 2 === 0;
}

const meuArray = [ 2, 12, 88, 96, 11 ,123];

console.log('V-> ', filtraPares(meuArray));
*/
/*
function somaNums(arr){
     return arr.reduce(function(prev,current){
     console.log(prev);
     console.log(current);
     return prev + current;
    });

    }

const arr = [ 1, 2,];

console.log(somaNums(arr));
*/

const lista = [
    {
        name: 'sabao',
        preco: 30,
    },
    {
        name: 'leite',
        preco: 15,
    },
    {
        name: 'pao',
        preco: 15,
    },
];

const saldoDisp = 100;


function calcSaldo(saldoDisp,lista) {
    return lista.reduce(function (prev,current,index) {
        console.log('rodada',index+1);
        console.log('prev =>',prev);
        console.log('next =>',current);
        return prev - current.preco;
    }, saldoDisp);
}

console.log(calcSaldo(saldoDisp,lista));