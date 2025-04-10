# Change default Screencast Ouput format from .webm to .mp4

### **Use GNOME Screen Recorder with Custom GStreamer Settings**

Ubuntu's built-in screen recorder uses GStreamer for encoding. Modify the encoder settings:

1. **Install Required Codecs**:
    
    ```bash
    sudo apt install gstreamer1.0-libav gstreamer1.0-plugins-bad
    ```
    
2. **Create a Custom GStreamer Pipeline**:
    
    Edit your environment configuration:
    
    ```bash
    nano ~/.profile
    ```
    
    Add this line at the end:
    
    ```bash
    export GST_ENCODER="video/x-h264,profile=high! queue ! h264parse ! mp4mux ! filesink"
    ```
    
3. **Apply Changes**:
    
    ```bash
    source ~/.profile
    ```
