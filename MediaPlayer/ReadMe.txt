Program to display media (ASCII art) to users through the commandline

Files Included:

Array- Array Template class to store items; comes with basic array features
Channel- Container object that contains Channel meta-data and a collection of media
Media- Contains media and content data
MediaPlayer- Determines how to play a Media, either audio only, or audio and video where audio is text and video is ASCII art
MediaTube- Stores channels along with their media and allows them to be queried
Search- A virtual base class of all Search objects with behaviour objects match media by the channel owner, the category, and owner or category
View- Collects user input and displays Channels, Media, and other information
