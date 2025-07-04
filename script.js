// script.js
const projects = [
  {
    title: "Line Follower Robot",
    description: "Follows a path using 6 IR sensors and Arduino Uno.",
    link: "#"
  },
  {
    title: "Obstacle Avoiding Robot",
    description: "Uses ultrasonic sensors to avoid obstacles automatically.",
    link: "#"
  },
  {
    title: "Voice Controlled Robot",
    description: "Controlled using voice commands via Bluetooth.",
    link: "#"
  }
];

const container = document.getElementById("project-container");

projects.forEach(project => {
  const card = document.createElement("div");
  card.className = "bg-blue-800 p-6 rounded-xl shadow-lg";
  card.innerHTML = `
    <h3 class="text-xl font-bold mb-2">${project.title}</h3>
    <p>${project.description}</p>
    <a href="${project.link}" target="_blank" class="block mt-4 text-blue-300 hover:underline">View Project</a>
  `;
  container.appendChild(card);
});
