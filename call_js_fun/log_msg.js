Module["simple_js_fun"] = function simple_js_fun(a, b)
{
    console.log("In the js_fun");
    console.log("Received " + a + " and " + b);

    let x = a + b;
    console.log("TYYYPE OFFF " + typeof(x));

    return x;
}