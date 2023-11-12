from moviepy.editor import *
import sys
import os


def create_clips(num, cnt, path, name="MapChart_Map"):
    clips = []
    for i in range(1, cnt+1):
        img = f"{name} ({i}).png"
        clip = ImageClip(path+"Images/"+img).set_duration(1)
        clips.append(clip)
    video_clip = concatenate_videoclips(clips, method="compose")
    video_clip.write_videofile(f"{path}Clips/{num}.mp4", remove_temp=False, codec="libx264", fps=1)
    

if __name__ == "__main__":
    # take the path of the folder from the arguments
    path = sys.argv[1]
    # find the number of files in the path folder
    cnt = len(os.listdir(path+"Images"))
    # convert cnt to integer
    cnt = int(cnt)
                        
    create_clips(1, cnt, path)