document.getElementById("submit").addEventListener("click", function () {
  const value = document.getElementById("formula-field").value;
  
  if (typeof value !== "string") 
  {
    console.log("The given value is not a string: " + value);
    return;
  }
  let n = value.length;

  for(let i=0; i<n; ++i)
  {
    let c = value[i];
    if (/\d/.test(c)) 
      console.log("number");
    else 
      console.log("not number");
  }
});

document.getElementById("reportBtn").addEventListener("click", function () {
  const text = encodeURIComponent("#2025電卓　(開発者はこのタグを不定期に検索することでデバッグに取り掛かります！)");
  const url = `https://twitter.com/intent/tweet?text=${text}`;
  window.open(url, "_blank");
});
