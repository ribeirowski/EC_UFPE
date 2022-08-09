from __future__ import print_function
import cv2 as cv
import argparse

parser = argparse.ArgumentParser(description='Code for Cascade Classifier tutorial.')
parser.add_argument('--face_cascade', help='Path to face cascade.', default='haarcascade_frontalface_alt.xml')
parser.add_argument('--eyes_cascade', help='Path to eyes cascade.', default='haarcascade_eye_tree_eyeglasses.xml')
parser.add_argument('--camera', help='Camera divide number.', type=int, default=0)
args = parser.parse_args()
face_cascade_name = args.face_cascade
eyes_cascade_name = args.eyes_cascade
face_cascade = cv.CascadeClassifier()
eyes_cascade = cv.CascadeClassifier()

if not face_cascade.load(cv.samples.findFile(face_cascade_name)):
    print('--(!)Error loading face cascade')
    exit(0)
if not eyes_cascade.load(cv.samples.findFile(eyes_cascade_name)):
    print('--(!)Error loading eyes cascade')
    exit(0)

cap = cv.VideoCapture(0)

print("[1] Face Detection")
print("[2] Eye Detection")
print("[3] Both face and eye Detection")
print("[0] Quit\n")
escolha = int(input("Selecione uma opção: "))

while cap.isOpened():
    ret, frame = cap.read()
    frame_gray = cv.cvtColor(frame, cv.COLOR_BGR2GRAY)
    frame_gray = cv.equalizeHist(frame_gray)
    faces = face_cascade.detectMultiScale(frame_gray)

    if escolha == 1:
        for (x, y , w ,h) in faces:
            cv.rectangle(frame, (x,y), (x+w, y+h), (255, 0, 0), 3)
            roi_gray = frame_gray[y:y+h, x:x+w]
            roi_color = frame[y:y+h, x:x+w]
        # Display the output
        cv.imshow('img', cv.flip(frame, 1))
        if cv.waitKey(10) == 27:
            break

    if escolha == 2:
        for (x, y , w ,h) in faces:
            #cv.rectangle(frame, (x,y), (x+w, y+h), (255, 0, 0), 3)
            roi_gray = frame_gray[y:y+h, x:x+w]
            roi_color = frame[y:y+h, x:x+w]
            eyes = eyes_cascade.detectMultiScale(roi_gray)
            for (ex, ey ,ew, eh) in eyes:
                cv.rectangle(roi_color, (ex,ey), (ex+ew, ey+eh), (0, 255, 0), 3)
        # Display the output
        cv.imshow('img', cv.flip(frame, 1))
        if cv.waitKey(10) == 27:
            break

    if escolha == 3:
        for (x, y , w ,h) in faces:
            cv.rectangle(frame, (x,y), (x+w, y+h), (255, 0, 0), 3)
            roi_gray = frame_gray[y:y+h, x:x+w]
            roi_color = frame[y:y+h, x:x+w]
            eyes = eyes_cascade.detectMultiScale(roi_gray)
            for (ex, ey ,ew, eh) in eyes:
                cv.rectangle(roi_color, (ex,ey), (ex+ew, ey+eh), (0, 255, 0), 3)

        # Display the output
        cv.imshow('img', cv.flip(frame, 1))
        if cv.waitKey(10) == 27:
            break

    if escolha == 0:
        break

cap.release()