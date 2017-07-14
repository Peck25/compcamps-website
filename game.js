var items = [
  {name: "apple", value: 4},
  {name: "orange", value: 3},
  {name: "elephant", value: 650}
];

var count = 0;
var first = document.querySelector("first");
var second = document.querySelector("second");
var firstdiv = document.querySelector("first");
var seconddiv = document.querySelector("second");

first.addeventlistner("click", function() {
  if(firstDiv.value < secondDiv.value){
    count++;
    console.log(count);
    setItems();
  } else {
    console.log(count);

  }
});

function setItems() {
  function rand(first) {
    var i = Math.floor(Math.random()*(items.length));
    if(i == first) {
      rand(first);
    } else {
      return i;
    }
  }
  var i =rand();
  firstDiv.value = items[i];
  firstDiv.innerText = items[i].name;
  var j = rand(i);
  secondDiv.value = items[i].name;
  secondDiv.innerText = items[i].name;
}

setItems();
