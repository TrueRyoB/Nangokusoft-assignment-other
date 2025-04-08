document.getElementById("btn").addEventListener("click", function () {
  alert("外部ファイルからこんにちは！");
});

document.getElementById("tweetBtn").addEventListener("click", function () {
  const text = encodeURIComponent("#2025電卓　(開発者はこのタグを不定期に検索することでデバッグに取り掛かります！)");
  const url = `https://twitter.com/intent/tweet?text=${text}`;
  window.open(url, "_blank");
});
