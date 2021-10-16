DSA + Algo

A kind of Question bank for my interview prep

<h2>Web Cache </h2>
<p>
Web caching is the activity of storing data for reuse, such as a copy of a web page served by a web server. It is cached or stored the first time a user visits the page and the next time a user requests the same page, a cache will serve the copy, which helps keep the origin server from getting overloaded.
Web browser locally store web sites on your computer's hard drive which is callled the "cache". The cache contains a history of all visited sites as well as images, audio files. Cookies are also stored in the cache. They are often stored in the Temporary Internet Files folder.
  </p>
<h2>
 How to store cache data in ReactJS
 </h2> 
 <br>
 <p>
  import * as React from 'react';

export default function App() {

// Function to add our give data into cache
const addDataIntoCache = (cacheName, url, response) => {
	// Converting our respons into Actual Response form
	const data = new Response(JSON.stringify(response));

	if ('caches' in window) {
	// Opening given cache and putting our data into it
	caches.open(cacheName).then((cache) => {
		cache.put(url, data);
		alert('Data Added into cache!')
	});
	}
};

return (
	<div style={{ height: 500, width: '80%' }}>
	<h4>How to store data into cache in ReactJS?</h4>
	<button onClick={()=>addDataIntoCache('MyCache',
	'https://localhost:300','SampleData')} >
		Add Data Into Cache</button>
	</div>
);
}

  </p>
