<div data-sku="12345" class="mini-cart-product-name">
    <a href="http://example.com/product/12345.html">Product 1</a>
</div>

<div data-sku="67890" class="mini-cart-product-name">
   <a href="http://example.com/product/67890.html">Product 2</a>
</div>

function GetCartProducts() {
    var SKUs = [];
    var URL = document.querySelectorAll(".mini-cart-product-name a");
    for (var i = 0; i < URL.length; i++) {
        SKUs[i] = URL[i].dataset.sku;
    }
    console.log(SKUs);
}
GetCartProducts();


 $('body').on('click', '#addReport', function(e) {
                e.preventDefault();
                var url =  $(this).attr('href');
                console.log(url)
                alert('hi')
            })
