var favSongs =
{
  order: 1,
  song: "I Want Something Just Like This",
  artist: "Chainsmokers, ft. Coldplay"

};


var favSong2 = {
  order: 2,
  song: "Castle On The Hill",
  artist: "Ed Sheeran"
  };

  var favSongs = [
  {
    order: 1,
    song: "I Want Something Just Like This",
    artist: "Chainsmokers ft. Coldplay"
  },
  {
    order: 2,
    song: "Castle On The Hill",
    artist: "Ed Sheeran"
  }

];

console.log(FavSongs);
var tbody = document.querySelector("tbody");
for(var favSong in favSongs){
  var tr = document.createElement("tr");

  for(var favSong in favSongs){
  var td1 = document.createElement("td");
  td1.innerText = favSongs[1].order;
  if (favsong == "link") {
    td1.innertext = favSongs [favSong] [favSong2];
  } else {
    td1.innertext = favSongs [favSong] [favSong2];
  }
    tr.appendchild(td1);
  }
  tbody.appendchild(tr);
}

console.log(tr);
