from flask import Flask, render_template, request, jsonify
from flask_restful import Api, Resource
import json
from flask_cors import CORS, cross_origin
import sys

app = Flask(__name__)
CORS(app)

@app.route("/")
def index(was_plan_found=False):
    return jsonify({"hello":"hello"})

@app.route("/validate", methods=['GET', 'POST'])
def validate(was_plan_found=False):
    if request.method == 'POST':
        print("in post")
        print(request.json)
    return jsonify({"hello":"hello"})


def main(host='10.218.107.216'):
    app.run(host=host,
            port=5000,
            debug=True)

if __name__ == '__main__':
    if len(sys.argv) == 2:
        main(host=sys.argv[1])
    else:
        main()
